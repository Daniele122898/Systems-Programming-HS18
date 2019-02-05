
int64_t __gmon_start__ = 0;

void fun_400c50();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_400c50();
    }
    return;
}

void fun_400c50() {
    goto __gmon_start__;
}

int64_t __libc_start_main = 0x400b46;

void fun_400b40(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    rax1 = 7;
    if (1 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int64_t fopen = 0x400bd6;

int64_t fun_400bd0(void** rdi, void** rsi) {
    goto fopen;
}

int64_t __printf_chk = 0x400bc6;

void fun_400bc0(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    goto __printf_chk;
}

int64_t exit = 0x400be6;

void fun_400be0(void** rdi, void** rsi, void** rdx, void** rcx, ...) {
    goto exit;
}

void explode_bomb(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, uint32_t a7) {
    return;
}

void** g28;

void read_six_numbers(void** rdi, void** rsi);

uint64_t fun_400b00(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, ...);

uint64_t phase_2(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** rsp7;
    void** rax8;
    void** v9;
    void** rsi10;
    int32_t* rsp11;
    int32_t v12;
    uint32_t v13;
    int32_t* rbx14;
    int32_t* rbp15;
    int32_t v16;
    uint32_t v17;
    uint64_t rax18;

    rsp7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 40);
    rax8 = g28;
    v9 = rax8;
    rsi10 = rsp7;
    read_six_numbers(rdi, rsi10);
    rsp11 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsp7 - 8) + 8);
    if (v12 != 1) {
        explode_bomb(rdi, rsi10, rdx, rcx, r8, r9, v13);
        rsp11 = rsp11 - 2 + 2;
    }
    rbx14 = rsp11;
    rbp15 = rsp11 + 5;
    do {
        if (*reinterpret_cast<int32_t*>(&v9) != v16 + v16) {
            explode_bomb(rdi, rsi10, rdx, rcx, r8, r9, v17);
        }
        ++rbx14;
    } while (rbx14 != rbp15);
    rax18 = reinterpret_cast<unsigned char>(v9) ^ reinterpret_cast<unsigned char>(g28);
    if (rax18) {
        rax18 = fun_400b00(rdi, rsi10, rdx, rcx, r8, r9);
    }
    return rax18;
}

int64_t __stack_chk_fail = 0x400b06;

uint64_t fun_400b00(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, ...) {
    goto __stack_chk_fail;
}

int64_t func4(uint32_t edi, void** rsi, int32_t edx, void** rcx) {
    uint32_t eax5;
    int64_t rax6;
    void** rcx7;
    int64_t rax8;
    void** rsi9;
    int64_t rax10;
    int64_t rax11;

    eax5 = edx - *reinterpret_cast<uint32_t*>(&rsi);
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(eax5 + (eax5 >> 31)) >> 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx7) = static_cast<uint32_t>(reinterpret_cast<uint64_t>(rax6 + reinterpret_cast<unsigned char>(rsi)));
    *reinterpret_cast<int32_t*>(&rcx7 + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rcx7) <= reinterpret_cast<int32_t>(edi)) {
        *reinterpret_cast<int32_t*>(&rax8) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rcx7) < reinterpret_cast<int32_t>(edi)) {
            *reinterpret_cast<int32_t*>(&rsi9) = static_cast<int32_t>(reinterpret_cast<uint64_t>(rcx7 + 1));
            *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
            rax10 = func4(edi, rsi9, edx, rcx7);
            *reinterpret_cast<int32_t*>(&rax8) = static_cast<int32_t>(rax10 + rax10 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        }
    } else {
        rax11 = func4(edi, rsi, static_cast<int32_t>(reinterpret_cast<uint64_t>(rcx7 + 0xffffffffffffffff)), rcx7);
        *reinterpret_cast<int32_t*>(&rax8) = *reinterpret_cast<int32_t*>(&rax11) + *reinterpret_cast<int32_t*>(&rax11);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    }
    return rax8;
}

int32_t fun_400bb0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8);

uint64_t phase_5(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** rsp7;
    void** rax8;
    void** v9;
    void** rcx10;
    void** rdx11;
    void** v12;
    int32_t eax13;
    uint32_t v14;
    uint32_t eax15;
    uint32_t v16;
    uint32_t v17;
    uint32_t v18;
    uint64_t rax19;

    rsp7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 24);
    rax8 = g28;
    v9 = rax8;
    rcx10 = rsp7 + 4;
    rdx11 = rsp7;
    eax13 = fun_400bb0(rdi, "%d %d", rdx11, rcx10, r8, r9, v12, v9);
    if (eax13 <= 1) {
        explode_bomb(rdi, "%d %d", rdx11, rcx10, r8, r9, v14);
    }
    eax15 = v16 & 15;
    v17 = eax15;
    if (eax15 == 15) {
        addr_401198_4:
        explode_bomb(rdi, "%d %d", rdx11, rcx10, r8, r9, v17);
    } else {
        *reinterpret_cast<uint32_t*>(&rcx10) = 0;
        *reinterpret_cast<int32_t*>(&rdx11) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdx11) = *reinterpret_cast<int32_t*>(&rdx11) + 1;
            *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
            eax15 = *reinterpret_cast<uint32_t*>("\n" + eax15 * 4);
            *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<uint32_t*>(&rcx10) + eax15;
            *reinterpret_cast<int32_t*>(&rcx10 + 4) = 0;
        } while (eax15 != 15);
        v17 = 15;
        if (*reinterpret_cast<int32_t*>(&rdx11) != 15) 
            goto addr_401198_4;
        if (*reinterpret_cast<uint32_t*>(&rcx10) != v18) 
            goto addr_401198_4;
    }
    rax19 = reinterpret_cast<unsigned char>(v9) ^ reinterpret_cast<unsigned char>(g28);
    if (rax19) {
        rax19 = fun_400b00(rdi, "%d %d", rdx11, rcx10, r8, r9, rdi, "%d %d", rdx11, rcx10, r8, r9);
    }
    return rax19;
}

struct s0 {
    signed char[8] pad8;
    struct s0* f8;
};

uint64_t phase_6(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** rsp7;
    void** rax8;
    void** v9;
    void** rsi10;
    int32_t* rsp11;
    int32_t r13d12;
    int32_t v13;
    uint32_t v14;
    int32_t ebx15;
    int32_t v16;
    uint32_t v17;
    void* rsi18;
    int32_t ecx19;
    int32_t eax20;
    struct s0* rdx21;
    void** rbx22;
    void** v23;
    void** rax24;
    void** rsi25;
    void** rcx26;
    void** rdx27;
    void** v28;
    int32_t ebp29;
    uint32_t v30;
    uint64_t rax31;

    rsp7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 0x68);
    rax8 = g28;
    v9 = rax8;
    rsi10 = rsp7;
    read_six_numbers(rdi, rsi10);
    rsp11 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsp7 - 8) + 8);
    r13d12 = 0;
    while (1) {
        if (reinterpret_cast<uint32_t>(v13 - 1) > 5) {
            explode_bomb(rdi, rsi10, rdx, rcx, r8, r9, v14);
            rsp11 = rsp11 - 2 + 2;
        }
        ++r13d12;
        if (r13d12 == 6) 
            break;
        ebx15 = r13d12;
        do {
            if (v16 == rsp11[ebx15]) {
                explode_bomb(rdi, rsi10, rdx, rcx, r8, r9, v17);
                rsp11 = rsp11 - 2 + 2;
            }
            ++ebx15;
        } while (ebx15 <= 5);
    }
    *reinterpret_cast<int32_t*>(&rsi18) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = 0;
    do {
        ecx19 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsp11) + reinterpret_cast<uint64_t>(rsi18));
        eax20 = 1;
        *reinterpret_cast<int32_t*>(&rdx21) = 0x6042f0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
        if (ecx19 > 1) {
            do {
                rdx21 = rdx21->f8;
                ++eax20;
            } while (eax20 != ecx19);
        }
        *reinterpret_cast<struct s0**>(reinterpret_cast<uint64_t>(rsp11) + reinterpret_cast<uint64_t>(rsi18) * 2 + 32) = rdx21;
        rsi18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi18) + 4);
    } while (!reinterpret_cast<int1_t>(rsi18 == 24));
    rbx22 = v23;
    rax24 = reinterpret_cast<void**>(rsp11 + 8);
    rsi25 = reinterpret_cast<void**>(rsp11 + 18);
    rcx26 = rbx22;
    do {
        rdx27 = v28;
        *reinterpret_cast<void***>(rcx26 + 8) = rdx27;
        rax24 = rax24 + 8;
        rcx26 = rdx27;
    } while (rax24 != rsi25);
    *reinterpret_cast<void***>(rdx27 + 8) = reinterpret_cast<void**>(0);
    ebp29 = 5;
    do {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx22)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx22 + 8)))) {
            explode_bomb(rdi, rsi25, rdx27, rcx26, r8, r9, v30);
        }
        rbx22 = *reinterpret_cast<void***>(rbx22 + 8);
        --ebp29;
    } while (ebp29);
    rax31 = reinterpret_cast<unsigned char>(v9) ^ reinterpret_cast<unsigned char>(g28);
    if (rax31) {
        rax31 = fun_400b00(rdi, rsi25, rdx27, rcx26, r8, r9);
    }
    return rax31;
}

int64_t fun7(void** rdi, void** esi, ...) {
    int64_t rax3;
    void** rdi4;
    int64_t rax5;
    void** rdi6;
    int64_t rax7;

    if (!rdi) {
        *reinterpret_cast<int32_t*>(&rax3) = -1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    } else {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdi)) <= reinterpret_cast<signed char>(esi)) {
            *reinterpret_cast<int32_t*>(&rax3) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
            if (*reinterpret_cast<void***>(rdi) != esi) {
                rdi4 = *reinterpret_cast<void***>(rdi + 16);
                rax5 = fun7(rdi4, esi);
                *reinterpret_cast<int32_t*>(&rax3) = static_cast<int32_t>(rax5 + rax5 + 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
            }
        } else {
            rdi6 = *reinterpret_cast<void***>(rdi + 8);
            rax7 = fun7(rdi6, esi);
            *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(&rax7) + *reinterpret_cast<int32_t*>(&rax7);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        }
    }
    return rax3;
}

void** fun_400c20();

int32_t blank_line(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    unsigned char* rbp4;
    uint32_t ebx5;
    void** rax6;
    int32_t eax7;

    rbp4 = rdi;
    do {
        ebx5 = *rbp4;
        if (!*reinterpret_cast<signed char*>(&ebx5)) 
            break;
        rax6 = fun_400c20();
        ++rbp4;
    } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(*rax6) + *reinterpret_cast<signed char*>(&ebx5) * 2 + 1) & 32);
    goto addr_4014f9_4;
    eax7 = 1;
    addr_4014fe_6:
    return eax7;
    addr_4014f9_4:
    eax7 = 0;
    goto addr_4014fe_6;
}

int32_t num_input_strings = 0;

void fun_400c30(void** rdi, void** rsi, void** rdx, void** rcx, ...);

int32_t driver_post(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8);

void fun_400ae0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, int64_t a7, int64_t a8);

uint64_t send_msg(int32_t edi) {
    void* rsp2;
    int32_t r8d3;
    void** rax4;
    void** v5;
    void** rsi6;
    int64_t rax7;
    void** rdx8;
    int64_t rcx9;
    void** rdi10;
    void** rcx11;
    void** r9_12;
    void*** rsp13;
    void** rdi14;
    void* rsp15;
    void** r8_16;
    void** rdx17;
    void** rdi18;
    int32_t eax19;
    int64_t v20;
    int64_t v21;
    uint64_t rax22;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x4018);
    r8d3 = edi;
    rax4 = g28;
    v5 = rax4;
    *reinterpret_cast<int32_t*>(&rsi6) = num_input_strings;
    *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
    rax7 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rsi6 + 0xffffffffffffffff));
    rdx8 = reinterpret_cast<void**>((rax7 + rax7 * 4 << 4) + 0x6047c0);
    rcx9 = -1;
    rdi10 = rdx8;
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx9)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx9) = *reinterpret_cast<int32_t*>(&rcx9) - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        ++rdi10;
        ++rsi6;
    } while (*reinterpret_cast<void***>(rdi10));
    rcx11 = reinterpret_cast<void**>(~rcx9 + 99);
    if (reinterpret_cast<unsigned char>(rcx11) > reinterpret_cast<unsigned char>(0x2000)) {
        *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>("ERROR: Input string is too large.");
        *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
        fun_400bc0(1, "ERROR: Input string is too large.", rdx8, rcx11);
        fun_400be0(8, "ERROR: Input string is too large.", rdx8, rcx11);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8);
    }
    *reinterpret_cast<int32_t*>(&r9_12) = reinterpret_cast<int32_t>("exploded");
    *reinterpret_cast<int32_t*>(&r9_12 + 4) = 0;
    if (r8d3) {
        r9_12 = reinterpret_cast<void**>("defused");
    }
    rsp13 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp2) - 8 - 8);
    rdi14 = reinterpret_cast<void**>(rsp13 + 16);
    fun_400c30(rdi14, 1, 0x2000, "%d:%s:%d:%s", rdi14, 1, 0x2000, "%d:%s:%d:%s");
    rsp15 = reinterpret_cast<void*>(rsp13 - 8 + 8);
    r8_16 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp15) + 0x2010);
    rdx17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp15) + 16);
    *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>("danielea");
    *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
    eax19 = driver_post("danielea", "Y9yNfkdUan454OPObRdd", rdx17, 0, r8_16, r9_12, rsi6, rdx8);
    if (eax19 < 0) {
        fun_400ae0(reinterpret_cast<int64_t>(rsp15) - 8 + 8 + 16 + 0x2000, "Y9yNfkdUan454OPObRdd", rdx17, 0, r8_16, r9_12, v20, v21);
        *reinterpret_cast<int32_t*>(&rdi18) = 0;
        *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
        fun_400be0(0, "Y9yNfkdUan454OPObRdd", rdx17, 0, 0, "Y9yNfkdUan454OPObRdd", rdx17, 0);
    }
    rax22 = reinterpret_cast<unsigned char>(v5) ^ reinterpret_cast<unsigned char>(g28);
    if (rax22) {
        rax22 = fun_400b00(rdi18, "Y9yNfkdUan454OPObRdd", rdx17, 0, r8_16, r9_12);
    }
    return rax22;
}

int64_t __sprintf_chk = 0x400c36;

void fun_400c30(void** rdi, void** rsi, void** rdx, void** rcx, ...) {
    goto __sprintf_chk;
}

int32_t submitr(int64_t rdi, int32_t esi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8);

int32_t driver_post(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8) {
    int32_t eax9;

    if (!*reinterpret_cast<int32_t*>(&rcx)) {
        if (!rdi || !*reinterpret_cast<void***>(rdi)) {
            *reinterpret_cast<void***>(r8) = reinterpret_cast<void**>(0x4b4f);
            *reinterpret_cast<unsigned char*>(r8 + 2) = 0;
            eax9 = 0;
        } else {
            eax9 = submitr("spca.systems.ethz.ch", 0x3b6e, "csapp", rdi, rsi, "SPCA2018", rdx, r8);
        }
    } else {
        fun_400bc0(1, "\nAUTORESULT_STRING=%s\n", rdx, rcx);
        *reinterpret_cast<void***>(r8) = reinterpret_cast<void**>(0x4b4f);
        *reinterpret_cast<unsigned char*>(r8 + 2) = 0;
        eax9 = 0;
    }
    return eax9;
}

int64_t puts = 0x400ae6;

void fun_400ae0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, int64_t a7, int64_t a8) {
    goto puts;
}

unsigned char* skip(void** rdi);

int64_t stdin = 0;

int64_t infile = 0;

int64_t fun_400ab0(void** rdi);

void** read_line(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    int64_t v7;
    unsigned char* rax8;
    int64_t rax9;
    int1_t zf10;
    int64_t v11;
    void** rdi12;
    int64_t rax13;
    int64_t rax14;
    unsigned char* rax15;
    int64_t v16;
    void** rsi17;
    int64_t rax18;
    void** rdx19;
    int64_t rcx20;
    void** rdi21;
    void** rcx22;
    int64_t v23;
    int64_t rax24;
    int64_t rax25;
    uint32_t v26;
    int64_t rax27;

    v7 = reinterpret_cast<int64_t>(__return_address());
    rax8 = skip(rdi);
    if (!rax8) {
        rax9 = stdin;
        zf10 = infile == rax9;
        if (zf10) {
            fun_400ae0("Error: Premature EOF on stdin", rsi, rdx, rcx, r8, r9, v11, v7);
            fun_400be0(8, rsi, rdx, rcx);
        }
        *reinterpret_cast<int32_t*>(&rdi12) = reinterpret_cast<int32_t>("GRADE_BOMB");
        *reinterpret_cast<int32_t*>(&rdi12 + 4) = 0;
        rax13 = fun_400ab0("GRADE_BOMB");
        if (rax13) {
            *reinterpret_cast<int32_t*>(&rdi12) = 0;
            *reinterpret_cast<int32_t*>(&rdi12 + 4) = 0;
            fun_400be0(0, rsi, rdx, rcx);
        }
        rax14 = stdin;
        infile = rax14;
        rax15 = skip(rdi12);
        if (!rax15) {
            fun_400ae0("Error: Premature EOF on stdin", rsi, rdx, rcx, r8, r9, v16, v7);
            fun_400be0(0, rsi, rdx, rcx);
        }
    }
    *reinterpret_cast<int32_t*>(&rsi17) = num_input_strings;
    *reinterpret_cast<int32_t*>(&rsi17 + 4) = 0;
    rax18 = *reinterpret_cast<int32_t*>(&rsi17);
    rdx19 = reinterpret_cast<void**>((rax18 + rax18 * 4 << 4) + 0x6047c0);
    rcx20 = -1;
    rdi21 = rdx19;
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx20)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx20) = *reinterpret_cast<int32_t*>(&rcx20) - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = 0;
        ++rdi21;
        ++rsi17;
    } while (*reinterpret_cast<void***>(rdi21));
    rcx22 = reinterpret_cast<void**>(~rcx20 - 1);
    if (*reinterpret_cast<int32_t*>(&rcx22) > 78) {
        fun_400ae0("Error: Input line too long", rsi17, rdx19, rcx22, r8, r9, v23, v7);
        *reinterpret_cast<int32_t*>(&rax24) = num_input_strings;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx19) = static_cast<int32_t>(rax24 + 1);
        *reinterpret_cast<int32_t*>(&rdx19 + 4) = 0;
        num_input_strings = *reinterpret_cast<int32_t*>(&rdx19);
        rax25 = *reinterpret_cast<int32_t*>(&rax24) * 80;
        *reinterpret_cast<int64_t*>(rax25 + 0x6047c0) = 0x636e7572742a2a2a;
        *reinterpret_cast<void***>(rax25 + 0x6047c8) = reinterpret_cast<void**>(0x2a2a2a64657461);
        explode_bomb(0x2a2a2a64657461, rsi17, rdx19, rcx22, r8, r9, v26);
    }
    rax27 = *reinterpret_cast<int32_t*>(&rsi17);
    *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(&rcx22) - 1 + (rax27 + rax27 * 4 << 4) + 0x6047c0) = 0;
    num_input_strings = static_cast<int32_t>(reinterpret_cast<uint64_t>(rsi17 + 1));
    return rdx19;
}

unsigned char* fun_400b50();

unsigned char* skip(void** rdi) {
    int64_t rdx2;
    unsigned char* rax3;
    int32_t eax4;

    do {
        rdx2 = infile;
        rax3 = fun_400b50();
        if (!rax3) 
            break;
        eax4 = blank_line(rax3, 80, rdx2);
    } while (eax4);
    return rax3;
}

int64_t __isoc99_sscanf = 0x400bb6;

int32_t fun_400bb0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8) {
    goto __isoc99_sscanf;
}

int32_t string_length(void** rdi);

int32_t strings_not_equal(void** rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    void** rbx6;
    void** rbp7;
    int32_t eax8;
    int32_t eax9;
    int32_t edx10;
    uint32_t eax11;
    uint32_t eax12;

    rbx6 = rdi;
    rbp7 = rsi;
    eax8 = string_length(rdi);
    eax9 = string_length(rbp7);
    edx10 = 1;
    if (eax8 != eax9) {
        addr_401449_2:
        return edx10;
    } else {
        eax11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6));
        if (!*reinterpret_cast<void***>(&eax11)) {
            edx10 = 0;
            goto addr_401449_2;
        } else {
            if (*reinterpret_cast<void***>(&eax11) == *reinterpret_cast<void***>(rbp7)) {
                do {
                    ++rbx6;
                    ++rbp7;
                    eax12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6));
                    if (!*reinterpret_cast<void***>(&eax12)) 
                        break;
                } while (*reinterpret_cast<void***>(&eax12) == *reinterpret_cast<void***>(rbp7));
                goto addr_401444_8;
            } else {
                edx10 = 1;
                goto addr_401449_2;
            }
        }
    }
    edx10 = 0;
    goto addr_401449_2;
    addr_401444_8:
    edx10 = 1;
    goto addr_401449_2;
}

int64_t fun_400b90(void** rdi, void** rsi, void** rdx);

uint64_t phase_defused(void** rdi, void** rsi, void** rdx, void** rcx);

uint64_t secret_phase(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    int64_t v7;
    int64_t rbx8;
    void** rax9;
    int64_t rax10;
    int64_t rbx11;
    void** rsi12;
    int64_t rax13;
    uint64_t rax14;

    v7 = rbx8;
    rax9 = read_line(rdi, rsi, rdx, rcx, r8, r9);
    rax10 = fun_400b90(rax9, 0, 10);
    rbx11 = rax10;
    if (static_cast<uint32_t>(rax10 - 1) > 0x3e8) {
        explode_bomb(rax9, 0, 10, rcx, r8, r9, *reinterpret_cast<uint32_t*>(&v7));
    }
    rsi12 = *reinterpret_cast<void***>(&rbx11);
    *reinterpret_cast<int32_t*>(&rsi12 + 4) = 0;
    rax13 = fun7("$", rsi12, "$", rsi12);
    if (*reinterpret_cast<int32_t*>(&rax13) != 3) {
        explode_bomb("$", rsi12, 10, rcx, r8, r9, *reinterpret_cast<uint32_t*>(&v7));
    }
    fun_400ae0("Wow! You've defused the secret stage!", rsi12, 10, rcx, r8, r9, v7, __return_address());
    rax14 = phase_defused("Wow! You've defused the secret stage!", rsi12, 10, rcx);
    return rax14;
}

int64_t __errno_location = 0x400ac6;

int32_t* fun_400ac0(void** rdi, void** rsi, void** rdx) {
    goto __errno_location;
}

int64_t close = 0x400b26;

void fun_400b20(void** rdi, void** rsi, void** rdx, void** rcx, ...) {
    goto close;
}

int32_t fun_400b30(void** rdi, void** rsi, void** rdx);

uint64_t rio_readlineb(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, ...) {
    void** rbx7;
    void** r13_8;
    void** r14_9;
    void** rax10;
    void** v11;
    int32_t r12d12;
    void** rbp13;
    int32_t eax14;
    int32_t eax15;
    int32_t* rax16;
    void** rdx17;
    uint32_t ecx18;
    int64_t rax19;
    uint64_t rax20;
    void** rcx21;

    rbx7 = rdi;
    r13_8 = rsi;
    r14_9 = rdx;
    rax10 = g28;
    v11 = rax10;
    r12d12 = 1;
    rbp13 = rdi + 16;
    if (reinterpret_cast<unsigned char>(rdx) <= reinterpret_cast<unsigned char>(1)) {
        goto addr_40196b_3;
    }
    while (1) {
        eax14 = *reinterpret_cast<int32_t*>(rbx7 + 4);
        if (reinterpret_cast<uint1_t>(eax14 < 0) | reinterpret_cast<uint1_t>(eax14 == 0)) {
            *reinterpret_cast<int32_t*>(&rdx) = 0x2000;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rsi = rbp13;
            rdi = *reinterpret_cast<void***>(rbx7);
            *reinterpret_cast<int32_t*>(&rdi + 4) = 0;
            eax15 = fun_400b30(rdi, rsi, 0x2000);
            *reinterpret_cast<int32_t*>(rbx7 + 4) = eax15;
            if (eax15 >= 0) {
                if (!eax15) 
                    break;
                *reinterpret_cast<void***>(rbx7 + 8) = rbp13;
            } else {
                rax16 = fun_400ac0(rdi, rsi, 0x2000);
                if (*rax16 != 4) 
                    goto addr_40191e_9;
            }
        } else {
            rdx17 = *reinterpret_cast<void***>(rbx7 + 8);
            ecx18 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx17));
            rdx = rdx17 + 1;
            *reinterpret_cast<void***>(rbx7 + 8) = rdx;
            *reinterpret_cast<int32_t*>(rbx7 + 4) = eax14 - 1;
            ++r13_8;
            *reinterpret_cast<signed char*>(r13_8 + 0xffffffffffffffff) = *reinterpret_cast<signed char*>(&ecx18);
            if (*reinterpret_cast<signed char*>(&ecx18) == 10) 
                goto addr_401955_11;
            ++r12d12;
            if (reinterpret_cast<unsigned char>(static_cast<int64_t>(r12d12)) >= reinterpret_cast<unsigned char>(r14_9)) 
                goto addr_40196b_3;
        }
    }
    *reinterpret_cast<int32_t*>(&rax19) = 0;
    addr_40199a_14:
    if (!*reinterpret_cast<int32_t*>(&rax19)) {
        if (r12d12 != 1) {
            addr_40196b_3:
            *reinterpret_cast<void***>(r13_8) = reinterpret_cast<void**>(0);
            rax20 = reinterpret_cast<uint64_t>(static_cast<int64_t>(r12d12));
        } else {
            *reinterpret_cast<int32_t*>(&rax20) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
        }
    } else {
        rax20 = 0xffffffffffffffff;
    }
    rcx21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v11) ^ reinterpret_cast<unsigned char>(g28));
    if (rcx21) {
        rax20 = fun_400b00(rdi, rsi, rdx, rcx21, r8, r9);
    }
    return rax20;
    addr_40191e_9:
    rax19 = -1;
    goto addr_40199a_14;
    addr_401955_11:
    goto addr_40196b_3;
}

int64_t signal = 0x400b66;

void fun_400b60(int64_t rdi, void** rsi) {
    goto signal;
}

int64_t alarm = 0x400b16;

void fun_400b10(int64_t rdi, void** rsi) {
    goto alarm;
}

int32_t fun_400c40(void** rdi, void** rsi, void** rdx);

struct s1 {
    signed char[20] pad20;
    int32_t f20;
    int64_t* f24;
};

struct s1* fun_400b70(int64_t rdi, void** rsi, void** rdx);

void fun_400b80(void* rdi, int64_t rsi, int64_t rdx, void** rcx);

int32_t fun_400bf0(int64_t rdi, void** rsi, void** rdx, void** rcx);

int32_t init_driver(void** rdi, void** rsi) {
    void** rax3;
    void** rdx4;
    void** rsi5;
    void** rdi6;
    int32_t eax7;
    struct s1* rax8;
    void* rsp9;
    int64_t rdx10;
    int64_t rsi11;
    int64_t rdi12;
    int32_t eax13;
    uint64_t rax14;
    void** rcx15;
    void** rcx16;
    void** r9_17;
    int64_t r9_18;

    rax3 = g28;
    fun_400b60(13, 1);
    fun_400b60(29, 1);
    fun_400b60(29, 1);
    *reinterpret_cast<int32_t*>(&rdx4) = 0;
    *reinterpret_cast<int32_t*>(&rdx4 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi5) = 1;
    *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi6) = 2;
    *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
    eax7 = fun_400c40(2, 1, 0);
    if (eax7 >= 0) {
        rax8 = fun_400b70("spca.systems.ethz.ch", 1, 0);
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 40 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        if (rax8) {
            rdx10 = rax8->f20;
            rsi11 = *rax8->f24;
            fun_400b80(reinterpret_cast<int64_t>(rsp9) + 4, rsi11, rdx10, 12);
            *reinterpret_cast<int32_t*>(&rdx4) = 16;
            *reinterpret_cast<int32_t*>(&rdx4 + 4) = 0;
            rsi5 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp9) - 8 + 8);
            *reinterpret_cast<int32_t*>(&rdi12) = eax7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = 0;
            eax13 = fun_400bf0(rdi12, rsi5, 16, 12);
            if (eax13 >= 0) {
                *reinterpret_cast<int32_t*>(&rdi6) = eax7;
                *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
                fun_400b20(rdi6, rsi5, 16, 12);
                *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(0x4b4f);
                *reinterpret_cast<unsigned char*>(rdi + 2) = 0;
                *reinterpret_cast<int32_t*>(&rax14) = 0;
            } else {
                rdx4 = reinterpret_cast<void**>(0xffffffffffffffff);
                *reinterpret_cast<int32_t*>(&rsi5) = 1;
                *reinterpret_cast<int32_t*>(&rsi5 + 4) = 0;
                fun_400c30(rdi, 1, 0xffffffffffffffff, "Error: Unable to connect to server %s", rdi, 1, 0xffffffffffffffff, "Error: Unable to connect to server %s");
                *reinterpret_cast<int32_t*>(&rdi6) = eax7;
                *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
                fun_400b20(rdi6, 1, 0xffffffffffffffff, "Error: Unable to connect to server %s", rdi6, 1, 0xffffffffffffffff, "Error: Unable to connect to server %s");
                *reinterpret_cast<int32_t*>(&rax14) = -1;
            }
        } else {
            *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(0x44203a726f727245);
            *reinterpret_cast<void***>(rdi + 8) = reinterpret_cast<void**>(0x6e7520736920534e);
            *reinterpret_cast<void***>(rdi + 16) = reinterpret_cast<void**>(0x206f7420656c6261);
            *reinterpret_cast<int64_t*>(rdi + 24) = 0x2065766c6f736572;
            *reinterpret_cast<int32_t*>(rdi + 32) = reinterpret_cast<int32_t>(0x6120726576726573);
            *reinterpret_cast<int32_t*>(rdi + 40) = 0x65726464;
            *reinterpret_cast<int16_t*>(rdi + 44) = 0x7373;
            *reinterpret_cast<signed char*>(rdi + 46) = 0;
            *reinterpret_cast<int32_t*>(&rdi6) = eax7;
            *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
            fun_400b20(rdi6, 1, 0, rcx15);
            *reinterpret_cast<int32_t*>(&rax14) = -1;
        }
    } else {
        *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(0x43203a726f727245);
        *reinterpret_cast<void***>(rdi + 8) = reinterpret_cast<void**>(0x6e7520746e65696c);
        *reinterpret_cast<void***>(rdi + 16) = reinterpret_cast<void**>(0x206f7420656c6261);
        *reinterpret_cast<int64_t*>(rdi + 24) = 0x7320657461657263;
        *reinterpret_cast<int32_t*>(rdi + 32) = 0x656b636f;
        *reinterpret_cast<int16_t*>(rdi + 36) = 0x74;
        *reinterpret_cast<int32_t*>(&rax14) = -1;
    }
    rcx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax3) ^ reinterpret_cast<unsigned char>(g28));
    if (rcx16) {
        rax14 = fun_400b00(rdi6, rsi5, rdx4, rcx16, "spca.systems.ethz.ch", r9_17, rdi6, rsi5, rdx4, rcx16, "spca.systems.ethz.ch", r9_18);
    }
    return *reinterpret_cast<int32_t*>(&rax14);
}

void* fun_400af0(void** rdi, void** rsi, void** rdx);

void fun_400ad0(void** rdi, void** rsi, void** rdx, void** rcx);

int32_t submitr(int64_t rdi, int32_t esi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** rbx12;
    void** r15_13;
    void** rax14;
    void** v15;
    void** rdx16;
    void** rsi17;
    void** rdi18;
    int32_t eax19;
    int32_t r12d20;
    struct s1* rax21;
    void* rsp22;
    int64_t rdx23;
    int64_t rsi24;
    void* rsp25;
    int64_t rdi26;
    int32_t eax27;
    void*** rsp28;
    void** rcx29;
    void** rdi30;
    void** rcx31;
    void** rdi32;
    void** rcx33;
    void** rdi34;
    void* rdx35;
    void** rcx36;
    void** rdi37;
    uint64_t rax38;
    int64_t rcx39;
    void** rcx40;
    void** rdi41;
    int64_t rax42;
    void** rdi43;
    void* rsp44;
    void** rcx45;
    signed char v46;
    void** r13_47;
    void* rsp48;
    void** rbx49;
    void** rbp50;
    void** rdi51;
    void* rax52;
    int32_t* rax53;
    void** rdi54;
    uint64_t rax55;
    void* rsp56;
    void** rcx57;
    void* rsp58;
    signed char v59;
    signed char v60;
    signed char v61;
    uint64_t rax62;
    uint64_t rax63;
    uint32_t eax64;
    void** rcx65;
    void* rax66;
    void** r14_67;
    int64_t rax68;
    uint32_t eax69;
    int32_t eax70;
    void** rdi71;

    v9 = rdx;
    v10 = rcx;
    v11 = r9;
    rbx12 = a7;
    r15_13 = a8;
    rax14 = g28;
    v15 = rax14;
    *reinterpret_cast<uint32_t*>(&rdx16) = 0;
    *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi17) = 1;
    *reinterpret_cast<int32_t*>(&rsi17 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi18) = 2;
    *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
    eax19 = fun_400c40(2, 1, 0);
    if (eax19 >= 0) {
        r12d20 = eax19;
        rax21 = fun_400b70(rdi, 1, 0);
        rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0xa068 - 8 + 8 - 8 + 8);
        if (rax21) {
            rdx23 = rax21->f20;
            rsi24 = *rax21->f24;
            fun_400b80(reinterpret_cast<int64_t>(rsp22) + 52, rsi24, rdx23, 12);
            rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
            __asm__("ror bp, 0x8");
            *reinterpret_cast<uint32_t*>(&rdx16) = 16;
            *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
            rsi17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp25) + 48);
            *reinterpret_cast<int32_t*>(&rdi26) = r12d20;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = 0;
            eax27 = fun_400bf0(rdi26, rsi17, 16, 12);
            rsp28 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
            if (eax27 >= 0) {
                r9 = reinterpret_cast<void**>(0xffffffffffffffff);
                rcx29 = reinterpret_cast<void**>(0xffffffffffffffff);
                rdi30 = rbx12;
                do {
                    if (!*reinterpret_cast<int32_t*>(&rcx29)) 
                        break;
                    *reinterpret_cast<int32_t*>(&rcx29) = *reinterpret_cast<int32_t*>(&rcx29) - 1;
                    *reinterpret_cast<int32_t*>(&rcx29 + 4) = 0;
                    ++rdi30;
                } while (*reinterpret_cast<void***>(rdi30));
                rsi17 = reinterpret_cast<void**>(~reinterpret_cast<unsigned char>(rcx29));
                rcx31 = reinterpret_cast<void**>(0xffffffffffffffff);
                rdi32 = v9;
                do {
                    if (!*reinterpret_cast<int32_t*>(&rcx31)) 
                        break;
                    *reinterpret_cast<int32_t*>(&rcx31) = *reinterpret_cast<int32_t*>(&rcx31) - 1;
                    *reinterpret_cast<int32_t*>(&rcx31 + 4) = 0;
                    ++rdi32;
                    ++rsi17;
                } while (*reinterpret_cast<void***>(rdi32));
                r8 = rcx31;
                rcx33 = reinterpret_cast<void**>(0xffffffffffffffff);
                rdi34 = v10;
                do {
                    if (!*reinterpret_cast<int32_t*>(&rcx33)) 
                        break;
                    *reinterpret_cast<int32_t*>(&rcx33) = *reinterpret_cast<int32_t*>(&rcx33) - 1;
                    *reinterpret_cast<int32_t*>(&rcx33 + 4) = 0;
                    ++rdi34;
                    ++rsi17;
                } while (*reinterpret_cast<void***>(rdi34));
                rdx35 = reinterpret_cast<void*>(~reinterpret_cast<unsigned char>(rcx33));
                rcx36 = reinterpret_cast<void**>(0xffffffffffffffff);
                rdi37 = v11;
                do {
                    if (!*reinterpret_cast<int32_t*>(&rcx36)) 
                        break;
                    *reinterpret_cast<int32_t*>(&rcx36) = *reinterpret_cast<int32_t*>(&rcx36) - 1;
                    *reinterpret_cast<int32_t*>(&rcx36 + 4) = 0;
                    ++rdi37;
                    ++rsi17;
                } while (*reinterpret_cast<void***>(rdi37));
                rdx16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdx35) - reinterpret_cast<unsigned char>(r8)) - reinterpret_cast<unsigned char>(rcx36));
                if (reinterpret_cast<unsigned char>(rdx16) + (reinterpret_cast<uint64_t>(rsi17 + reinterpret_cast<unsigned char>(rsi17) * 2) - 3) + 0x7b > 0x2000) 
                    goto addr_401bf7_17;
            } else {
                *reinterpret_cast<void***>(r15_13) = reinterpret_cast<void**>(0x55203a726f727245);
                *reinterpret_cast<void***>(r15_13 + 8) = reinterpret_cast<void**>(0x6f7420656c62616e);
                *reinterpret_cast<void***>(r15_13 + 16) = reinterpret_cast<void**>(0x7463656e6e6f6320);
                *reinterpret_cast<int64_t*>(r15_13 + 24) = 0x20656874206f7420;
                *reinterpret_cast<int32_t*>(r15_13 + 32) = 0x76726573;
                *reinterpret_cast<int16_t*>(r15_13 + 36) = 0x7265;
                *reinterpret_cast<signed char*>(r15_13 + 38) = 0;
                *reinterpret_cast<int32_t*>(&rdi18) = r12d20;
                *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
                fun_400b20(rdi18, rsi17, 16, 12);
                *reinterpret_cast<int32_t*>(&rax38) = -1;
                goto addr_402087_19;
            }
        } else {
            *reinterpret_cast<void***>(r15_13) = reinterpret_cast<void**>(0x44203a726f727245);
            *reinterpret_cast<void***>(r15_13 + 8) = reinterpret_cast<void**>(0x6e7520736920534e);
            *reinterpret_cast<void***>(r15_13 + 16) = reinterpret_cast<void**>(0x206f7420656c6261);
            *reinterpret_cast<int64_t*>(r15_13 + 24) = 0x2065766c6f736572;
            *reinterpret_cast<int32_t*>(r15_13 + 32) = reinterpret_cast<int32_t>(0x6120726576726573);
            *reinterpret_cast<int32_t*>(r15_13 + 40) = 0x65726464;
            *reinterpret_cast<int16_t*>(r15_13 + 44) = 0x7373;
            *reinterpret_cast<signed char*>(r15_13 + 46) = 0;
            *reinterpret_cast<int32_t*>(&rdi18) = r12d20;
            *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
            fun_400b20(rdi18, 1, 0, rcx);
            *reinterpret_cast<int32_t*>(&rax38) = -1;
            goto addr_402087_19;
        }
    } else {
        *reinterpret_cast<void***>(r15_13) = reinterpret_cast<void**>(0x43203a726f727245);
        *reinterpret_cast<void***>(r15_13 + 8) = reinterpret_cast<void**>(0x6e7520746e65696c);
        *reinterpret_cast<void***>(r15_13 + 16) = reinterpret_cast<void**>(0x206f7420656c6261);
        *reinterpret_cast<int64_t*>(r15_13 + 24) = 0x7320657461657263;
        *reinterpret_cast<int32_t*>(r15_13 + 32) = 0x656b636f;
        *reinterpret_cast<int16_t*>(r15_13 + 36) = 0x74;
        *reinterpret_cast<int32_t*>(&rax38) = -1;
        goto addr_402087_19;
    }
    rdx16 = reinterpret_cast<void**>(rsp28 + 0x4050);
    *reinterpret_cast<int32_t*>(&rcx39) = 0x400;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx39) + 4) = 0;
    while (rcx39) {
        --rcx39;
        rsi17 = rsi17 + 8;
    }
    rcx40 = reinterpret_cast<void**>(0xffffffffffffffff);
    rdi41 = rbx12;
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx40)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx40) = *reinterpret_cast<int32_t*>(&rcx40) - 1;
        *reinterpret_cast<int32_t*>(&rcx40 + 4) = 0;
        ++rdi41;
        ++rsi17;
    } while (*reinterpret_cast<void***>(rdi41));
    rax42 = ~reinterpret_cast<unsigned char>(rcx40) - 1;
    if (*reinterpret_cast<int32_t*>(&rax42)) 
        goto addr_401ca0_29;
    addr_402130_30:
    r9 = v10;
    r8 = v9;
    rdi43 = reinterpret_cast<void**>(rsp28 + 0x2050);
    fun_400c30(rdi43, 1, 0x2000, "GET /%s/submitr.pl/?userid=%s&userpwd=%s&lab=%s&result=%s&submit=submit HTTP/1.0\r\n\r\n", rdi43, 1, 0x2000, "GET /%s/submitr.pl/?userid=%s&userpwd=%s&lab=%s&result=%s&submit=submit HTTP/1.0\r\n\r\n");
    rsp44 = reinterpret_cast<void*>(rsp28 - 8 - 8 - 8 - 8 - 8 + 8);
    rcx45 = reinterpret_cast<void**>(0xffffffffffffffff);
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx45)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx45) = *reinterpret_cast<int32_t*>(&rcx45) - 1;
        *reinterpret_cast<int32_t*>(&rcx45 + 4) = 0;
    } while (v46);
    r13_47 = reinterpret_cast<void**>(~reinterpret_cast<unsigned char>(rcx45) + 0xffffffffffffffff);
    rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) + 32);
    rbx49 = r13_47;
    rbp50 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 0x2050);
    if (!r13_47) {
        goto addr_401dea_35;
    }
    do {
        rdx16 = rbx49;
        rsi17 = rbp50;
        *reinterpret_cast<int32_t*>(&rdi51) = r12d20;
        *reinterpret_cast<int32_t*>(&rdi51 + 4) = 0;
        rax52 = fun_400af0(rdi51, rsi17, rdx16);
        rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rax52) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rax52 == 0))) {
            rax53 = fun_400ac0(rdi51, rsi17, rdx16);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
            if (*rax53 != 4) 
                goto addr_401d8b_38;
            *reinterpret_cast<int32_t*>(&rax52) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax52) + 4) = 0;
        }
        rbp50 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp50) + reinterpret_cast<uint64_t>(rax52));
        rbx49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx49) - reinterpret_cast<uint64_t>(rax52));
    } while (rbx49);
    if (reinterpret_cast<signed char>(r13_47) >= reinterpret_cast<signed char>(0)) {
        addr_401dea_35:
        *reinterpret_cast<uint32_t*>(&rdx16) = 0x2000;
        *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
        rsi17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 0x2050);
        rdi54 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 64);
        rax55 = rio_readlineb(rdi54, rsi17, 0x2000, rcx45, r8, r9, rdi54, rsi17, 0x2000, rcx45);
        rsp56 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rax55) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rax55 == 0))) {
            rcx57 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp56) + 44);
            fun_400bb0(reinterpret_cast<int64_t>(rsp56) + 0x2050, "%s %d %[a-zA-z ]", reinterpret_cast<int64_t>(rsp56) + 0x6050, rcx57, reinterpret_cast<int64_t>(rsp56) + 0x8050, r9, v9, v10);
            rsp58 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp56) - 8 + 8);
            *reinterpret_cast<uint32_t*>(&r8) = 0;
            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
            if (0) {
                do {
                    if (v59 != 13) 
                        continue;
                    if (v60 != 10) 
                        continue;
                    if (!v61) 
                        break;
                    *reinterpret_cast<uint32_t*>(&rdx16) = 0x2000;
                    *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
                    rsi17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp58) + 0x2050);
                    rax62 = rio_readlineb(reinterpret_cast<int64_t>(rsp58) + 64, rsi17, 0x2000, rcx57, 0, r9);
                    rsp58 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp58) - 8 + 8);
                } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rax62) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rax62 == 0)));
                goto addr_401f23_47;
            } else {
                r9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp58) + 0x8050);
                rdx16 = reinterpret_cast<void**>(0xffffffffffffffff);
                *reinterpret_cast<int32_t*>(&rsi17) = 1;
                *reinterpret_cast<int32_t*>(&rsi17 + 4) = 0;
                fun_400c30(r15_13, 1, 0xffffffffffffffff, "Error: HTTP request failed with error %d: %s");
                *reinterpret_cast<int32_t*>(&rdi18) = r12d20;
                *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
                fun_400b20(rdi18, 1, 0xffffffffffffffff, "Error: HTTP request failed with error %d: %s");
                *reinterpret_cast<int32_t*>(&rax38) = -1;
                goto addr_402087_19;
            }
        } else {
            *reinterpret_cast<void***>(r15_13) = reinterpret_cast<void**>(0x43203a726f727245);
            *reinterpret_cast<void***>(r15_13 + 8) = reinterpret_cast<void**>(0x6e7520746e65696c);
            *reinterpret_cast<void***>(r15_13 + 16) = reinterpret_cast<void**>(0x206f7420656c6261);
            *reinterpret_cast<int64_t*>(r15_13 + 24) = 0x7269662064616572;
            *reinterpret_cast<int32_t*>(r15_13 + 32) = reinterpret_cast<int32_t>(0x6564616568207473);
            *reinterpret_cast<int32_t*>(r15_13 + 40) = reinterpret_cast<int32_t>(0x73206d6f72662072);
            *reinterpret_cast<signed char*>(r15_13 + 48) = reinterpret_cast<signed char>(0x65767265);
            *reinterpret_cast<int16_t*>(r15_13 + 52) = 0x72;
            *reinterpret_cast<int32_t*>(&rdi18) = r12d20;
            *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
            fun_400b20(rdi18, rsi17, 0x2000, rcx45, rdi18, rsi17, 0x2000, rcx45);
            *reinterpret_cast<int32_t*>(&rax38) = -1;
            goto addr_402087_19;
        }
    } else {
        addr_401d8b_38:
        *reinterpret_cast<void***>(r15_13) = reinterpret_cast<void**>(0x43203a726f727245);
        *reinterpret_cast<void***>(r15_13 + 8) = reinterpret_cast<void**>(0x6e7520746e65696c);
        *reinterpret_cast<void***>(r15_13 + 16) = reinterpret_cast<void**>(0x206f7420656c6261);
        *reinterpret_cast<int64_t*>(r15_13 + 24) = 0x6f74206574697277;
        *reinterpret_cast<int32_t*>(r15_13 + 32) = reinterpret_cast<int32_t>(0x7265732065687420);
        *reinterpret_cast<int32_t*>(r15_13 + 40) = 0x726576;
        *reinterpret_cast<int32_t*>(&rdi18) = r12d20;
        *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
        fun_400b20(rdi18, rsi17, rdx16, rcx45, rdi18, rsi17, rdx16, rcx45);
        *reinterpret_cast<int32_t*>(&rax38) = -1;
        goto addr_402087_19;
    }
    *reinterpret_cast<uint32_t*>(&rdx16) = 0x2000;
    *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
    rsi17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp58) + 0x2050);
    rax63 = rio_readlineb(reinterpret_cast<int64_t>(rsp58) + 64, rsi17, 0x2000, rcx57, 0, r9);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rax63) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rax63 == 0))) {
        rsi17 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp58) - 8 + 8 + 0x2050);
        fun_400ad0(r15_13, rsi17, 0x2000, rcx57);
        *reinterpret_cast<int32_t*>(&rdi18) = r12d20;
        *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
        fun_400b20(rdi18, rsi17, 0x2000, rcx57);
        *reinterpret_cast<uint32_t*>(&rdx16) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_13));
        *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
        eax64 = 79 - *reinterpret_cast<uint32_t*>(&rdx16);
        if (!eax64 && (*reinterpret_cast<uint32_t*>(&rdx16) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_13 + 1)), *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0, eax64 = 75 - *reinterpret_cast<uint32_t*>(&rdx16), !eax64)) {
            eax64 = -static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r15_13 + 2));
        }
        *reinterpret_cast<int32_t*>(&rax38) = reinterpret_cast<int32_t>(-static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!eax64))));
    } else {
        *reinterpret_cast<void***>(r15_13) = reinterpret_cast<void**>(0x43203a726f727245);
        *reinterpret_cast<void***>(r15_13 + 8) = reinterpret_cast<void**>(0x6e7520746e65696c);
        *reinterpret_cast<void***>(r15_13 + 16) = reinterpret_cast<void**>(0x206f7420656c6261);
        *reinterpret_cast<int64_t*>(r15_13 + 24) = 0x6174732064616572;
        *reinterpret_cast<int32_t*>(r15_13 + 32) = reinterpret_cast<int32_t>(0x7373656d20737574);
        *reinterpret_cast<int32_t*>(r15_13 + 40) = reinterpret_cast<int32_t>(0x6d6f726620656761);
        *reinterpret_cast<signed char*>(r15_13 + 48) = reinterpret_cast<signed char>(0x72657672657320);
        *reinterpret_cast<int32_t*>(&rdi18) = r12d20;
        *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
        fun_400b20(rdi18, rsi17, 0x2000, rcx57);
        *reinterpret_cast<int32_t*>(&rax38) = -1;
    }
    addr_402087_19:
    rcx65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) ^ reinterpret_cast<unsigned char>(g28));
    if (rcx65) {
        rax38 = fun_400b00(rdi18, rsi17, rdx16, rcx65, r8, r9);
    }
    return *reinterpret_cast<int32_t*>(&rax38);
    addr_401f23_47:
    *reinterpret_cast<void***>(r15_13) = reinterpret_cast<void**>(0x43203a726f727245);
    *reinterpret_cast<void***>(r15_13 + 8) = reinterpret_cast<void**>(0x6e7520746e65696c);
    *reinterpret_cast<void***>(r15_13 + 16) = reinterpret_cast<void**>(0x206f7420656c6261);
    *reinterpret_cast<int64_t*>(r15_13 + 24) = 0x6165682064616572;
    *reinterpret_cast<int32_t*>(r15_13 + 32) = reinterpret_cast<int32_t>(0x6f72662073726564);
    *reinterpret_cast<int32_t*>(r15_13 + 40) = reinterpret_cast<int32_t>(0x726576726573206d);
    *reinterpret_cast<signed char*>(r15_13 + 48) = 0;
    *reinterpret_cast<int32_t*>(&rdi18) = r12d20;
    *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
    fun_400b20(rdi18, rsi17, 0x2000, rcx57);
    *reinterpret_cast<int32_t*>(&rax38) = -1;
    goto addr_402087_19;
    addr_401ca0_29:
    *reinterpret_cast<int32_t*>(&rax66) = static_cast<int32_t>(rax42 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax66) + 4) = 0;
    r14_67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx12) + reinterpret_cast<uint64_t>(rax66) + 1);
    do {
        *reinterpret_cast<uint32_t*>(&r8) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx12));
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rax68) = static_cast<int32_t>(reinterpret_cast<uint64_t>(r8 + 0xffffffffffffffd6));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax68) + 4) = 0;
        if (!(*reinterpret_cast<unsigned char*>(&rax68) <= 53 && static_cast<int1_t>(0x2000000000ffd9 >> rax68) || (eax69 = (*reinterpret_cast<uint32_t*>(&r8) & 0xffffffdf) - 65, *reinterpret_cast<unsigned char*>(&eax69) <= 25))) {
            if (*reinterpret_cast<signed char*>(&r8) != 32) {
                eax70 = static_cast<int32_t>(reinterpret_cast<uint64_t>(r8 + 0xffffffffffffffe0));
                if (*reinterpret_cast<unsigned char*>(&eax70) <= 95) 
                    goto addr_401d00_62;
                if (*reinterpret_cast<signed char*>(&r8) != 9) 
                    goto addr_4020a3_64;
                addr_401d00_62:
                *reinterpret_cast<int32_t*>(&rcx40) = reinterpret_cast<int32_t>("%%%02X");
                *reinterpret_cast<int32_t*>(&rcx40 + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx16) = 8;
                *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
                *reinterpret_cast<int32_t*>(&rsi17) = 1;
                *reinterpret_cast<int32_t*>(&rsi17 + 4) = 0;
                rdi71 = reinterpret_cast<void**>(rsp28 + 0x8050);
                fun_400c30(rdi71, 1, 8, "%%%02X", rdi71, 1, 8, "%%%02X");
                rsp28 = rsp28 - 8 + 8;
            }
        }
        ++rbx12;
    } while (r14_67 != rbx12);
    goto addr_402130_30;
    addr_4020a3_64:
    *reinterpret_cast<void***>(r15_13) = reinterpret_cast<void**>(0x52203a726f727245);
    *reinterpret_cast<void***>(r15_13 + 8) = reinterpret_cast<void**>(0x747320746c757365);
    *reinterpret_cast<void***>(r15_13 + 16) = reinterpret_cast<void**>(0x6e6f6320676e6972);
    *reinterpret_cast<int64_t*>(r15_13 + 24) = 0x6e6120736e696174;
    *reinterpret_cast<int32_t*>(r15_13 + 32) = reinterpret_cast<int32_t>(0x6c6167656c6c6920);
    *reinterpret_cast<int32_t*>(r15_13 + 40) = reinterpret_cast<int32_t>(0x72706e7520726f20);
    *reinterpret_cast<signed char*>(r15_13 + 48) = reinterpret_cast<signed char>(0x20656c6261746e69);
    *reinterpret_cast<int64_t*>(r15_13 + 56) = 0x6574636172616863;
    *reinterpret_cast<int16_t*>(r15_13 + 64) = 0x2e72;
    *reinterpret_cast<signed char*>(r15_13 + 66) = 0;
    *reinterpret_cast<int32_t*>(&rdi18) = r12d20;
    *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
    fun_400b20(rdi18, rsi17, rdx16, rcx40);
    *reinterpret_cast<int32_t*>(&rax38) = -1;
    goto addr_402087_19;
    addr_401bf7_17:
    *reinterpret_cast<void***>(r15_13) = reinterpret_cast<void**>(0x52203a726f727245);
    *reinterpret_cast<void***>(r15_13 + 8) = reinterpret_cast<void**>(0x747320746c757365);
    *reinterpret_cast<void***>(r15_13 + 16) = reinterpret_cast<void**>(0x6f6f7420676e6972);
    *reinterpret_cast<int64_t*>(r15_13 + 24) = 0x202e656772616c20;
    *reinterpret_cast<int32_t*>(r15_13 + 32) = reinterpret_cast<int32_t>(0x6573616572636e49);
    *reinterpret_cast<int32_t*>(r15_13 + 40) = reinterpret_cast<int32_t>(0x5254494d42555320);
    *reinterpret_cast<signed char*>(r15_13 + 48) = reinterpret_cast<signed char>(0x46554258414d5f);
    *reinterpret_cast<int32_t*>(&rdi18) = r12d20;
    *reinterpret_cast<int32_t*>(&rdi18 + 4) = 0;
    fun_400b20(rdi18, rsi17, rdx16, rcx36);
    *reinterpret_cast<int32_t*>(&rax38) = -1;
    goto addr_402087_19;
}

void sig_handler();

uint64_t initialize_bomb(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** rax7;
    void** rsi8;
    void** rsp9;
    void** rdi10;
    int32_t eax11;
    uint64_t rax12;

    rax7 = g28;
    *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(sig_handler);
    *reinterpret_cast<int32_t*>(&rsi8 + 4) = 0;
    fun_400b60(2, sig_handler);
    rsp9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x2018 - 8 + 8);
    rdi10 = rsp9;
    eax11 = init_driver(rdi10, sig_handler);
    if (eax11 < 0) {
        rdx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp9 - 8) + 8);
        *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>("Initialization error:\n%s\n");
        *reinterpret_cast<int32_t*>(&rsi8 + 4) = 0;
        fun_400bc0(1, "Initialization error:\n%s\n", rdx, rcx);
        *reinterpret_cast<int32_t*>(&rdi10) = 8;
        *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
        fun_400be0(8, "Initialization error:\n%s\n", rdx, rcx);
    }
    rax12 = reinterpret_cast<unsigned char>(rax7) ^ reinterpret_cast<unsigned char>(g28);
    if (rax12) {
        rax12 = fun_400b00(rdi10, rsi8, rdx, rcx, r8, r9);
    }
    return rax12;
}

void phase_1(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    int32_t eax7;
    uint32_t v8;

    eax7 = strings_not_equal(rdi, "Why make trillions when we could make... billions?", rdx, rcx, r8);
    if (eax7) {
        explode_bomb(rdi, "Why make trillions when we could make... billions?", rdx, rcx, r8, r9, v8);
    }
    return;
}

uint64_t phase_defused(void** rdi, void** rsi, void** rdx, void** rcx) {
    void** rax5;
    void** rdi6;
    void* rsp7;
    int1_t zf8;
    void** r8_9;
    void** r9_10;
    void** v11;
    void** v12;
    int32_t eax13;
    int32_t eax14;
    void** r9_15;
    int64_t v16;
    int64_t v17;
    void** r9_18;
    int64_t v19;
    int64_t v20;
    void** r9_21;
    void** r9_22;
    int64_t v23;
    int64_t v24;
    void** r9_25;
    int64_t v26;
    int64_t v27;
    uint64_t rax28;
    void** r9_29;

    rax5 = g28;
    *reinterpret_cast<int32_t*>(&rdi6) = 1;
    *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
    send_msg(1);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x78 - 8 + 8);
    zf8 = num_input_strings == 6;
    if (zf8) {
        r8_9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 16);
        rcx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 12);
        rdx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 8);
        *reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("%d %d %s");
        *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
        eax13 = fun_400bb0(0x6048b0, "%d %d %s", rdx, rcx, r8_9, r9_10, v11, v12);
        if (eax13 == 3 && (*reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("DrEvil"), *reinterpret_cast<int32_t*>(&rsi + 4) = 0, eax14 = strings_not_equal(reinterpret_cast<int64_t>(rsp7) - 8 + 8 + 16, "DrEvil", rdx, rcx, r8_9), !eax14)) {
            fun_400ae0("Curses, you've found the secret phase!", "DrEvil", rdx, rcx, r8_9, r9_15, v16, v17);
            fun_400ae0("But finding it and solving it are quite different...", "DrEvil", rdx, rcx, r8_9, r9_18, v19, v20);
            secret_phase("But finding it and solving it are quite different...", "DrEvil", rdx, rcx, r8_9, r9_21);
        }
        fun_400ae0("Congratulations! You've defused the bomb!", rsi, rdx, rcx, r8_9, r9_22, v23, v24);
        *reinterpret_cast<int32_t*>(&rdi6) = reinterpret_cast<int32_t>("Your instructor has been notified and will verify your solution.");
        *reinterpret_cast<int32_t*>(&rdi6 + 4) = 0;
        fun_400ae0("Your instructor has been notified and will verify your solution.", rsi, rdx, rcx, r8_9, r9_25, v26, v27);
    }
    rax28 = reinterpret_cast<unsigned char>(rax5) ^ reinterpret_cast<unsigned char>(g28);
    if (rax28) {
        rax28 = fun_400b00(rdi6, rsi, rdx, rcx, r8_9, r9_29);
    }
    return rax28;
}

uint64_t phase_3(void** rdi, void** rsi, void** rdx, void** rcx) {
    void* rsp5;
    void** rax6;
    void** r8_7;
    void** rcx8;
    void** rdx9;
    void** r9_10;
    void** v11;
    void** v12;
    int32_t eax13;
    void** r9_14;
    uint32_t v15;
    uint32_t v16;
    void** r9_17;
    uint32_t v18;
    int32_t eax19;
    int64_t rax20;
    int32_t v21;
    int32_t v22;
    void** r9_23;
    uint32_t v24;
    int32_t v25;
    void** r9_26;
    uint32_t v27;
    int32_t v28;
    void** r9_29;
    uint32_t v30;
    int32_t v31;
    void** r9_32;
    uint32_t v33;
    int32_t v34;
    void** r9_35;
    uint32_t v36;
    int32_t v37;
    void** r9_38;
    uint32_t v39;
    int32_t v40;
    void** r9_41;
    uint32_t v42;
    int32_t v43;
    void** r9_44;
    uint32_t v45;
    signed char v46;
    void** r9_47;
    uint32_t v48;
    uint64_t rax49;
    void** r9_50;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 40);
    rax6 = g28;
    r8_7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp5) + 20);
    rcx8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp5) + 15);
    rdx9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp5) + 16);
    eax13 = fun_400bb0(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_10, v11, v12);
    if (eax13 <= 2) {
        explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_14, v15);
    }
    if (v16 > 7) {
        explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_17, v18);
        eax19 = 0x78;
    } else {
        *reinterpret_cast<int32_t*>(&rax20) = v21;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
        switch (rax20) {
        case 0:
            eax19 = 0x72;
            if (v22 != 0x32c) {
                explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_23, v24);
                eax19 = 0x72;
                break;
            }
        case 1:
            eax19 = 0x6d;
            if (v25 != 0x291) {
                explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_26, v27);
                eax19 = 0x6d;
                break;
            }
        case 2:
            eax19 = 0x67;
            if (v28 != 0x16a) {
                explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_29, v30);
                eax19 = 0x67;
                break;
            }
        case 3:
            eax19 = 97;
            if (v31 != 0x38c) {
                explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_32, v33);
                eax19 = 97;
                break;
            }
        case 4:
            eax19 = 98;
            if (v34 != 0x13f) {
                explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_35, v36);
                eax19 = 98;
                break;
            }
        case 5:
            eax19 = 0x72;
            if (v37 != 0x2ac) {
                explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_38, v39);
                eax19 = 0x72;
                break;
            }
        case 6:
            eax19 = 0x78;
            if (v40 != 0x34d) {
                explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_41, v42);
                eax19 = 0x78;
                break;
            }
        case 7:
            eax19 = 99;
            if (v43 != 0xe4) {
                explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_44, v45);
                eax19 = 99;
            }
        }
    }
    if (*reinterpret_cast<signed char*>(&eax19) != v46) {
        explode_bomb(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_47, v48);
    }
    rax49 = reinterpret_cast<unsigned char>(rax6) ^ reinterpret_cast<unsigned char>(g28);
    if (rax49) {
        rax49 = fun_400b00(rdi, "%d %c %d", rdx9, rcx8, r8_7, r9_50);
    }
    return rax49;
}

uint64_t phase_4(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** rsp7;
    void** rax8;
    void** rcx9;
    void** v10;
    int32_t eax11;
    uint32_t v12;
    uint32_t v13;
    void** rdi14;
    uint32_t v15;
    int64_t rax16;
    int32_t v17;
    uint32_t v18;
    uint64_t rax19;

    rsp7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 24);
    rax8 = g28;
    rcx9 = rsp7 + 4;
    eax11 = fun_400bb0(rdi, "%d %d", rsp7, rcx9, r8, r9, v10, rax8);
    if (eax11 != 2 || v12 > 14) {
        explode_bomb(rdi, "%d %d", rsp7, rcx9, r8, r9, v13);
    }
    *reinterpret_cast<uint32_t*>(&rdi14) = v15;
    *reinterpret_cast<int32_t*>(&rdi14 + 4) = 0;
    rax16 = func4(*reinterpret_cast<uint32_t*>(&rdi14), 0, 14, rcx9);
    if (*reinterpret_cast<int32_t*>(&rax16) != 4 || v17 != 4) {
        explode_bomb(rdi14, 0, 14, rcx9, r8, r9, v18);
    }
    rax19 = reinterpret_cast<unsigned char>(rax8) ^ reinterpret_cast<unsigned char>(g28);
    if (rax19) {
        rax19 = fun_400b00(rdi14, 0, 14, rcx9, r8, r9);
    }
    return rax19;
}

void read_six_numbers(void** rdi, void** rsi) {
    void** rcx3;
    void** r9_4;
    void** r8_5;
    int32_t eax6;
    uint32_t v7;

    rcx3 = rsi + 4;
    r9_4 = rsi + 12;
    r8_5 = rsi + 8;
    eax6 = fun_400bb0(rdi, "%d %d %d %d %d %d", rsi, rcx3, r8_5, r9_4, rsi + 16, rsi + 20);
    if (eax6 <= 5) {
        explode_bomb(rdi, "%d %d %d %d %d %d", rsi, rcx3, r8_5, r9_4, v7);
    }
    return;
}

int64_t __ctype_b_loc = 0x400c26;

void** fun_400c20() {
    goto __ctype_b_loc;
}

int64_t fgets = 0x400b56;

unsigned char* fun_400b50() {
    goto fgets;
}

int64_t getenv = 0x400ab6;

int64_t fun_400ab0(void** rdi) {
    goto getenv;
}

int32_t string_length(void** rdi) {
    int32_t eax2;

    if (!*reinterpret_cast<void***>(rdi)) {
        return 0;
    } else {
        eax2 = 0;
        do {
            ++rdi;
            ++eax2;
        } while (*reinterpret_cast<void***>(rdi));
        return eax2;
    }
}

int64_t strtol = 0x400b96;

int64_t fun_400b90(void** rdi, void** rsi, void** rdx) {
    goto strtol;
}

int64_t __fprintf_chk = 0x400c06;

void fun_400c00(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    goto __fprintf_chk;
}

int64_t read = 0x400b36;

int32_t fun_400b30(void** rdi, void** rsi, void** rdx) {
    goto read;
}

int64_t gethostbyname = 0x400b76;

struct s1* fun_400b70(int64_t rdi, void** rsi, void** rdx) {
    goto gethostbyname;
}

int64_t __memmove_chk = 0x400b86;

void fun_400b80(void* rdi, int64_t rsi, int64_t rdx, void** rcx) {
    goto __memmove_chk;
}

int64_t connect = 0x400bf6;

int32_t fun_400bf0(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    goto connect;
}

int64_t write = 0x400af6;

void* fun_400af0(void** rdi, void** rsi, void** rdx) {
    goto write;
}

int64_t strcpy = 0x400ad6;

void fun_400ad0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto strcpy;
}

int64_t socket = 0x400c46;

int32_t fun_400c40(void** rdi, void** rsi, void** rdx) {
    goto socket;
}

int64_t sleep = 0x400c16;

void fun_400c10(int64_t rdi, void** rsi) {
    goto sleep;
}

int64_t fflush = 0x400ba6;

void fun_400ba0(int64_t rdi, void** rsi) {
    goto fflush;
}

int64_t main(int32_t edi, void** rsi);

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void __libc_csu_fini();

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400b40(main, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

void _fini() {
    return;
}

void fun_400d05() {
    int64_t v1;

    goto v1;
}

int64_t __JCR_END__ = 0;

void socket();

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (!(zf1 || 1)) {
        socket();
    }
    if (1) 
        goto 0x400d08;
    if (1) 
        goto 0x400d08;
    goto 0;
}

int64_t main(int32_t edi, void** rsi) {
    void** rdi1;
    void** rbx3;
    int64_t rax4;
    void** rdx5;
    void** rcx6;
    void** r8_7;
    void** r9_8;
    void** r8_9;
    void** r9_10;
    int64_t rbx11;
    void** r8_12;
    void** r9_13;
    void** r8_14;
    void** r9_15;
    void** rax16;
    void** r8_17;
    void** r9_18;
    void** r8_19;
    void** r9_20;
    void** r8_21;
    void** r9_22;
    void** rax23;
    void** r8_24;
    void** r9_25;
    void** r8_26;
    void** r9_27;
    void** r8_28;
    void** r9_29;
    void** rax30;
    void** r8_31;
    void** r9_32;
    void** r8_33;
    void** r9_34;
    void** rax35;
    void** r8_36;
    void** r9_37;
    void** r8_38;
    void** r9_39;
    void** r8_40;
    void** r9_41;
    void** rax42;
    void** r8_43;
    void** r9_44;
    void** r8_45;
    void** r9_46;
    void** r8_47;
    void** r9_48;
    void** rax49;
    void** r8_50;
    void** r9_51;
    void** rdx52;
    int64_t rax53;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    if (*reinterpret_cast<int32_t*>(&rdi1) != 1) {
        rbx3 = rsi;
        if (*reinterpret_cast<int32_t*>(&rdi1) == 2) {
            rdi1 = *reinterpret_cast<void***>(rsi + 8);
            *reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("r");
            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            rax4 = fun_400bd0(rdi1, "r");
            infile = rax4;
            if (rax4) {
                addr_400dcf_4:
                initialize_bomb(rdi1, rsi, rdx5, rcx6, r8_7, r9_8);
                fun_400ae0("Welcome to my fiendish little bomb. You have 6 phases with", rsi, rdx5, rcx6, r8_9, r9_10, rbx11, __return_address());
                fun_400ae0("which to blow yourself up. Have a nice day!", rsi, rdx5, rcx6, r8_12, r9_13, rbx11, __return_address());
                rax16 = read_line("which to blow yourself up. Have a nice day!", rsi, rdx5, rcx6, r8_14, r9_15);
                phase_1(rax16, rsi, rdx5, rcx6, r8_17, r9_18);
                phase_defused(rax16, rsi, rdx5, rcx6);
                fun_400ae0("Phase 1 defused. How about the next one?", rsi, rdx5, rcx6, r8_19, r9_20, rbx11, __return_address());
                rax23 = read_line("Phase 1 defused. How about the next one?", rsi, rdx5, rcx6, r8_21, r9_22);
                phase_2(rax23, rsi, rdx5, rcx6, r8_24, r9_25);
                phase_defused(rax23, rsi, rdx5, rcx6);
                fun_400ae0("That's number 2.  Keep going!", rsi, rdx5, rcx6, r8_26, r9_27, rbx11, __return_address());
                rax30 = read_line("That's number 2.  Keep going!", rsi, rdx5, rcx6, r8_28, r9_29);
                phase_3(rax30, rsi, rdx5, rcx6);
                phase_defused(rax30, rsi, rdx5, rcx6);
                fun_400ae0("Halfway there!", rsi, rdx5, rcx6, r8_31, r9_32, rbx11, __return_address());
                rax35 = read_line("Halfway there!", rsi, rdx5, rcx6, r8_33, r9_34);
                phase_4(rax35, rsi, rdx5, rcx6, r8_36, r9_37);
                phase_defused(rax35, rsi, rdx5, rcx6);
                fun_400ae0("So you got that one.  Try this one.", rsi, rdx5, rcx6, r8_38, r9_39, rbx11, __return_address());
                rax42 = read_line("So you got that one.  Try this one.", rsi, rdx5, rcx6, r8_40, r9_41);
                phase_5(rax42, rsi, rdx5, rcx6, r8_43, r9_44);
                phase_defused(rax42, rsi, rdx5, rcx6);
                fun_400ae0("Good work!  On to the next...", rsi, rdx5, rcx6, r8_45, r9_46, rbx11, __return_address());
                rax49 = read_line("Good work!  On to the next...", rsi, rdx5, rcx6, r8_47, r9_48);
                phase_6(rax49, rsi, rdx5, rcx6, r8_50, r9_51);
                phase_defused(rax49, rsi, rdx5, rcx6);
                return 0;
            } else {
                rcx6 = *reinterpret_cast<void***>(rbx3 + 8);
                rdx52 = *reinterpret_cast<void***>(rbx3);
                *reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("%s: Error: Couldn't open %s\n");
                *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
                fun_400bc0(1, "%s: Error: Couldn't open %s\n", rdx52, rcx6);
                fun_400be0(8, "%s: Error: Couldn't open %s\n", rdx52, rcx6);
            }
        }
        rdx5 = *reinterpret_cast<void***>(rsi);
        *reinterpret_cast<int32_t*>(&rsi) = reinterpret_cast<int32_t>("Usage: %s [<input_file>]\n");
        *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
        fun_400bc0(1, "Usage: %s [<input_file>]\n", rdx5, rcx6);
        *reinterpret_cast<int32_t*>(&rdi1) = 8;
        *reinterpret_cast<int32_t*>(&rdi1 + 4) = 0;
        fun_400be0(8, "Usage: %s [<input_file>]\n", rdx5, rcx6);
        goto addr_400dcf_4;
    } else {
        rax53 = stdin;
        infile = rax53;
        goto addr_400dcf_4;
    }
}

int64_t stderr = 0;

void sigalrm_handler() {
    int64_t rdi1;

    rdi1 = stderr;
    fun_400c00(rdi1, 1, "Program timed out after %d seconds\n", 0);
    fun_400be0(1, 1, "Program timed out after %d seconds\n", 0);
}

void __libc_csu_fini() {
    return;
}

int64_t g604010 = 0;

void fun_400ab6() {
    goto g604010;
}

void fun_400b46() {
    goto 0x400aa0;
}

/* completed.7585 */
signed char completed_7585 = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = completed_7585 == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        completed_7585 = 1;
    }
    return rax2;
}

void fun_400bd6() {
    goto 0x400aa0;
}

void fun_400bc6() {
    goto 0x400aa0;
}

void fun_400be6() {
    goto 0x400aa0;
}

void fun_401651(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, int64_t a7) {
    signed char* rax8;
    signed char* rax9;
    signed char al10;
    signed char bh11;

    *rax8 = reinterpret_cast<signed char>(*rax9 + al10);
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>("\nBOOM!!!")) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdi) + reinterpret_cast<uint64_t>("\nBOOM!!!")) + bh11);
    fun_400ae0(rdi, rsi, rdx, rcx, r8, r9, __return_address(), a7);
    fun_400ae0("The bomb has blown up.", rsi, rdx, rcx, r8, r9, __return_address(), a7);
    send_msg(0);
    fun_400ae0("Your instructor has been notified.", rsi, rdx, rcx, r8, r9, __return_address(), a7);
    fun_400be0(8, rsi, rdx, rcx);
}

void fun_400b06() {
    goto 0x400aa0;
}

int64_t stdout = 0;

void sig_handler() {
    void** rsi1;
    void** rdx2;
    void** rcx3;
    void** r8_4;
    void** r9_5;
    int64_t v6;
    void** rsi7;
    void** rdx8;
    void** rcx9;
    int64_t rdi10;
    void** rdx11;
    void** rcx12;
    void** r8_13;
    void** r9_14;
    int64_t v15;
    void** rdx16;
    void** rcx17;
    void** rcx18;
    void** rcx19;

    fun_400ae0("So you think you can stop the bomb with ctrl-c, do you?", rsi1, rdx2, rcx3, r8_4, r9_5, v6, __return_address());
    fun_400c10(3, rsi7);
    fun_400bc0(1, "Well...", rdx8, rcx9);
    rdi10 = stdout;
    fun_400ba0(rdi10, "Well...");
    fun_400c10(1, "Well...");
    fun_400ae0("OK. :-)", "Well...", rdx11, rcx12, r8_13, r9_14, v15, __return_address());
    fun_400be0(16, "Well...", rdx16, rcx17);
    fun_400bc0(1, "Invalid phase%s\n", 16, rcx18);
    fun_400be0(8, "Invalid phase%s\n", 16, rcx19);
}

void initialize_bomb_solve() {
    return;
}

void fun_400c36() {
    goto 0x400aa0;
}

void fun_400ae6() {
    goto 0x400aa0;
}

void fun_400bb6() {
    goto 0x400aa0;
}

void fun_400ac6() {
    goto 0x400aa0;
}

void fun_400b26() {
    goto 0x400aa0;
}

void fun_400b66() {
    goto 0x400aa0;
}

void fun_400b16() {
    goto 0x400aa0;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r15d4;
    int64_t r14_5;
    int64_t r13_6;
    int64_t rbx7;
    int64_t rdi8;

    r15d4 = edi;
    r14_5 = rsi;
    r13_6 = rdx;
    _init();
    if (!0) {
        *reinterpret_cast<int32_t*>(&rbx7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>("0\r@" + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

void fun_400c26() {
    goto 0x400aa0;
}

void fun_400b56() {
    goto 0x400aa0;
}

void fun_400b96() {
    goto 0x400aa0;
}

void fun_400c06() {
    goto 0x400aa0;
}

void fun_400b36() {
    goto 0x400aa0;
}

void init_timeout(int32_t edi) {
    int64_t rdi2;

    if (edi) {
        fun_400b60(14, sigalrm_handler);
        *reinterpret_cast<int32_t*>(&rdi2) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = 0;
        if (edi >= 0) {
            *reinterpret_cast<int32_t*>(&rdi2) = edi;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = 0;
        }
        fun_400b10(rdi2, sigalrm_handler);
    }
    return;
}

void fun_400b76() {
    goto 0x400aa0;
}

void fun_400b86() {
    goto 0x400aa0;
}

void fun_400bf6() {
    goto 0x400aa0;
}

void fun_400af6() {
    goto 0x400aa0;
}

void fun_400ad6() {
    goto 0x400aa0;
}

void fun_400c46() {
    goto 0x400aa0;
}

void fun_400c16() {
    goto 0x400aa0;
}

void fun_400ba6() {
    goto 0x400aa0;
}
