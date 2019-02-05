#include <assert.h>
#include <errno.h>  // for EINVAL, ENOMEM
#include <stdlib.h>
#include <stdio.h>
#include <string.h> // memset

#include "paging.h"

/*
 * This assignment is a practical page-table exercise for the CASP[1]
 * course at ETH Zurich.
 * We simulate x86_64 paging.
 *
 * [1] Computer architecture and systems programming
 */

// Generate some sequences of virtual page addresses
// This simplifies the code a little
#define VIRTADDR2(i) (0x12345678UL + 4*i*(BASE_PAGE_SIZE))
//                                   \_ Map every fourth page
// Register cr3 points to the page map level 4 (chapter18, slide 57)
static pml4e_t *cr3;

// --------------------------------------------------
// Helper functions

/*
 * \brief Parse a virtual address
 *
 * Extract virtual page number and virtual page offset
 * from given virtual address for 4K pages.
 *
 * Virtual address:
 * -----------------------------------
 * | vpn1 | vpn2 | vpn3 | vpn4 | vpo |
 * -----------------------------------
 *    9      9      9      9      12     <- size in bits
 *
 * \param va The virtual address to be parsed
 * \param vpn1 Index for level 1 page table
 * \param vpn2 Index for level 2 page table
 * \param vpn3 Index for level 3 page table
 * \param vpn4 Index for level 4 page table
 * \param vpo Offset within page
 */
static inline void parse_virt_addr(vaddr_t va, uint32_t *vpn1, uint32_t *vpn2,
                            uint32_t *vpn3, uint32_t *vpn4, uint32_t *vpo)
{
//XXX Fill me
}

static inline pml4e_t *get_pml4e(uint32_t vpn1)
{
//XXX Fill me
}

static inline pdpe_t *get_pdpe(pml4e_t pml4e, uint32_t vpn2)
{
//XXX Fill me
}

static inline pde_t *get_pde(pdpe_t pdpe, uint32_t vpn3)
{
//XXX Fill me
}

static inline pte_t *get_pte(pde_t pde, uint32_t vpn4)
{
//XXX Fill me
}

// --------------------------------------------------


void *alloc_table(void)
{
//XXX Fill me
}

//XXX Fill me

/*
 * \brief set a page table entry to be present and pointing to the given
 * address.
 *
 * \param d the entry to update
 * \param pa the address to write into the entry
 * \param rw read_write flag
 */
void set_directory_entry(struct directory_entry *d, uint64_t pa, uint8_t rw)
{
//XXX Fill me
}


// --------------------------------------------------
// High level manipulation functions

/*
 * \brief Map a 1G page.
 *
 * \param pa Physical address of page to be mapped
 * \param va Virtual address of page to be mapped
 * \param rw Whether or not to map with write permissions
 */
bool map_huge(paddr_t pa, vaddr_t va, uint8_t rw)
{
//XXX Fill me
}
/*
 * \brief Map a 2M page.
 *
 * \param pa Physical address of page to be mapped
 * \param va Virtual address of page to be mapped
 * \param rw Whether or not to map with write permissions
 */
bool map_large(paddr_t pa, vaddr_t va, uint8_t rw)
{
//XXX Fill me
}

/*
 * \brief Map a 4K page.
 *
 * \param pa Physical address of page to be mapped
 * \param va Virtual address of page to be mapped
 * \param rw Whether or not to map with write permissions.
 */
bool map(paddr_t pa, vaddr_t va, uint8_t rw)
{
//XXX Fill me
}


/*
 * \brief Unmap a page.
 *
 * This needs to work for both, regular (4K), large (2M) and huge (1G) pages.
 *
 * \param va Virtual address of the page to unmap.
 */
void unmap(vaddr_t va)
{
//XXX Fill me
}

// --------------------------------------------------
// Evaluation

/*
 * \brief Walk the entire page table data structure and free all tables.
 *
 * Free tables at all levels of the page table, but not the pages themselves.
 * This is why we recurse at each level and skip missing entries and
 * huge/large/regular pages.
 */
void free_pagetable(pml4e_t *cr3)
{
//XXX Fill me
}

int main(int argc, char *argv[])
{
    uint64_t i;
    bool r;

    cr3 = alloc_table();

    // map some huge pages
    for (i = 0; i < 8; i++) {
        r = map_huge(0x40000000UL+(i*1024*1024*1024),
                     0x1000000000UL-(i*1024*1024*1024), 0);
        assert(r);
    }
    // check that we can't overwrite huge pages with huge pages
    for (i = 0; i < 8; i++) {
        r = map_huge(0x40000000UL+(i*1024*1024*1024),
                     0x1000000000UL-(i*1024*1024*1024), 0);
        assert(!r);
    }

    // check that we can't overwrite huge pages with large pages
    for (i = 0; i < 8; i++) {
        r = map_large(0x40000000UL+(i*1024*1024*1024),
                      0x1000000000UL-(i*1024*1024*1024), 0);
        assert(!r);
    }

    // check that we can't overwrite huge pages with large pages
    for (i = 0; i < 8; i++) {
        r = map(0x40000000UL+(i*1024*1024*1024),
                0x1000000000UL-(i*1024*1024*1024), 0);
        assert(!r);
    }
    dump_pagetable(cr3);

    // Unmap half of them again
    for(i=0; i<4; i++) {
        unmap(0x1000000000UL-(i*1024*1024*1024));
    }
    dump_pagetable(cr3);

    // Map some large pages
    for(i=0; i<8; i++) {
        r= map_large(0x00F0F000+(i*2*1024*1024),
                     0x2000000000UL-(i*1024*1024*1024), 1);
        assert(r);
    }
    // check that we can't map huge pages when large page exists in region
    for(i=0; i<8; i++) {
        r= map_huge(0x40000000UL+(i*1024*1024*1024),
                    0x2000000000UL-(i*1024*1024*1024), 1);
        assert(!r);
    }

    // check that we can't overwrite large entries with 4K pages
    for(i=0; i<8; i++) {
        r= map(0x00F0F000+(i*4*1024),
               0x2000000000UL-(i*1024*1024*1024), 1);
        assert(!r);
    }
    dump_pagetable(cr3);

    // Unmap half of them again
    for(i=0; i<4; i++) {
        unmap(0x2000000000UL-(i*1024*1024*1024));
    }
    dump_pagetable(cr3);

    // Map the same physical page several times to virtual address space.
    // Some of which are read-only
    for(i=0; i<1024; i++) {
        r = map(0x0AFFE000, VIRTADDR2(i), (i%256));
        assert(r);
    }

    // try to map large pages on region that contains small pages
    for (i = 0; i < 16; i++) {
        r = map_large(0xF0F000, VIRTADDR2(i), 1);
        assert(!r);
    }
    dump_pagetable(cr3);

    // Unmap most of them again
    for(i=0; i<1024; i++) {
        if((i%64)) {
            unmap(VIRTADDR2(i));
        }
    }

    // Cleanup
    free_pagetable(cr3);

    return 0;
}
