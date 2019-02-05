#ifndef PAGING_H
#define PAGING_H

#include <stdint.h> // For uint64_t
#include <inttypes.h>  // for PRIx64
#include <stdbool.h>

// --------------------------------------------------
// Data types

// Virtual address
typedef uint64_t vaddr_t;
// Physical address
typedef uint64_t paddr_t;
// Page directory entry: refers to another page table or page directory
// (whereas a page table entry refers to a mapped region of physical memory).
struct directory_entry {
    uint64_t        present         :1;
    uint64_t        read_write      :1;
    uint64_t        user_supervisor :1;
    uint64_t        write_through   :1;
    uint64_t        cache_disabled  :1;
    uint64_t        accessed        :1;
    uint64_t        ignored         :1;
    uint64_t        ps              :1; //mbz
    uint64_t        reserved1       :1;
    uint64_t        available       :3;
    uint64_t        base_addr       :36;
    uint64_t        reserved3       :4;
    uint64_t        available2      :11;
    uint64_t        execute_disable :1;
};
// Page map level 4 entry
typedef union {
    uint64_t raw;
    struct directory_entry d;
} pml4e_t;
// Page directory pointer table entry
typedef union {
    uint64_t raw;
    struct directory_entry d;
    struct {
        uint64_t        present         :1;
        uint64_t        read_write      :1;
        uint64_t        user_supervisor :1;
        uint64_t        write_through   :1;
        uint64_t        cache_disabled  :1;
        uint64_t        accessed        :1;
        uint64_t        dirty           :1;
        uint64_t        ps              :1; //mbo
        uint64_t        global          :1;
        uint64_t        available       :3;
        uint64_t        attr_index      :1;
        uint64_t        reserved        :17;
        uint64_t        base_addr       :18;
        uint64_t        reserved2       :4;
        uint64_t        available2      :11;
        uint64_t        execute_disable :1;
    } page;
} pdpe_t;
// Page directory entry
typedef union x86_64_pdir_entry {
    uint64_t raw;
    struct directory_entry d;
    struct {
        uint64_t        present         :1;
        uint64_t        read_write      :1;
        uint64_t        user_supervisor :1;
        uint64_t        write_through   :1;
        uint64_t        cache_disabled  :1;
        uint64_t        accessed        :1;
        uint64_t        dirty           :1;
        uint64_t        ps              :1;
        uint64_t        global          :1;
        uint64_t        available       :3;
        uint64_t        attr_index      :1;
        uint64_t        reserved        :8;
        uint64_t        base_addr       :27;
        uint64_t        reserved2       :4;
        uint64_t        available2      :11;
        uint64_t        execute_disable :1;
    } page;
} pde_t;
// Page table entry
typedef union x86_64_ptable_entry {
    uint64_t raw;
    struct {
        uint64_t        present         :1;
        uint64_t        read_write      :1;
        uint64_t        user_supervisor :1;
        uint64_t        write_through   :1;
        uint64_t        cache_disabled  :1;
        uint64_t        accessed        :1;
        uint64_t        dirty           :1;
        uint64_t        ps              :1;
        uint64_t        global          :1;
        uint64_t        available       :3;
        uint64_t        base_addr       :36;
        uint64_t        reserved2       :4;
        uint64_t        available2      :11;
        uint64_t        execute_disable :1;
    } page;
} pte_t;

// Various sizes
#define BASE_PAGE_BITS 12U
#define BASE_PAGE_SIZE (1UL<<BASE_PAGE_BITS)
#define PAGE_TABLE_ENTRIES_BITS 9U
#define PAGE_TABLE_ENTRIES (1UL<<PAGE_TABLE_ENTRIES_BITS)
#define PAGE_TABLE_SIZE BASE_PAGE_SIZE
#define PAGE_TABLE_MASK (PAGE_TABLE_ENTRIES-1)
#define BASE_PAGE_MASK (BASE_PAGE_SIZE-1)

void dump_pagetable(pml4e_t* cr3);

#endif // PAGING_H
