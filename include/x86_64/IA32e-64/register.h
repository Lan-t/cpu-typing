//
// Created by tia on 2020/09/13.
//

#ifndef CPU_TYPING_X86_64_IA32E_64_REGISTER_H
#define CPU_TYPING_X86_64_IA32E_64_REGISTER_H

#include <stdint.h>
#include "../../../_macro.h"

#pragma pack(1)

typedef uint64_t GeneralPurposeRegister;

TypedefStruct(RFLAGS, {
    // 0
    unsigned carry: 1;
    unsigned _1_reserved_0: 1;
    unsigned parity: 1;
    unsigned _0_reserved_1: 1;
    unsigned adjust: 1;
    unsigned _0_reserved_2: 1;
    unsigned zero: 1;
    unsigned sign: 1;
    // 8
    unsigned trap: 1;
    unsigned interrupt_enable: 1;
    unsigned direction: 1;
    unsigned overflow: 1;
    unsigned io_privilege_level: 2;
    unsigned nested_task: 1;
    unsigned _0_reserved_3: 1;
    // 16
    unsigned resume: 1;
    unsigned virtual8086: 1;
    unsigned alignment_check: 1;  // or access_control
    unsigned virtual_interrupt: 1;
    unsigned virtual_interrupt_pending: 1;
    unsigned identification: 1;
    // 22
    uint64_t _0_reserved_4: 42;
    // 64
})

TypedefStruct(CR0, {
    unsigned protected_mode_enable: 1;
    unsigned monitor_coProcessor: 1;
    unsigned emulation: 1;
    unsigned task_switched: 1;
    unsigned extension_type: 1;
    unsigned numeric_error: 1;
    unsigned _0_reserved: 10;
    unsigned write_protect: 1;
    unsigned _0_reserved_2: 1;
    unsigned alignment_mask: 1;
    unsigned _0_reserved_3: 10;
    unsigned not_write_throw: 1;
    unsigned cache_disable: 1;
    unsigned paging: 1;
    uint32_t _0_reserved_4;
})

typedef uint64_t CR1;
typedef uint64_t CR2;  // pageFault_addr

TypedefStruct(CR3, {
    unsigned PCID: 12;
    uint64_t PML4_addr: 52;
})

TypedefStruct(CR3_PCIDE0, {
    unsigned _reserved: 3;
    unsigned pageLevel_write_throw: 1;
    unsigned pageLevel_cache_disable: 1;
    unsigned _reserved_2: 7;
    uint64_t PML4_addr: 52;
})

TypedefStruct(CR4, {
    // 0
    unsigned v8086_extension: 1;
    unsigned protected_mode_virtual_interrupts: 1;
    unsigned timestamp_disable: 1;
    unsigned debug_extension: 1;
    unsigned pagesize_extension: 1;
    unsigned physical_addr_extension: 1;
    unsigned machine_check_extension: 1;
    unsigned page_global_enable: 1;
    // 8
    unsigned perform_monitor_counter_enable: 1;
    unsigned os_support_for_fxInstruction: 1;
    unsigned os_support_for_unmasked_SIMD_float_exceptions: 1;
    unsigned userMode_instruction_prevention: 1;
    unsigned _0_reserved_0: 1;
    unsigned VMX_enable: 1;
    unsigned SMX_enable: 1;
    unsigned _0_reserved_1: 1;
    // 16
    unsigned FSGSBASE_enable: 1;
    unsigned PCID_enable: 1;
    unsigned XSAVE_and_processor_extend_states_enable: 1;
    unsigned _0_reserved_2: 1;
    unsigned SMEP_enable: 1;
    unsigned SMAP_enable: 1;
    unsigned protection_key_enable: 1;
    // 23
    uint64_t _0_reserved_3: 41;
    // 64
})

TypedefStruct(CR8, {
    unsigned TPL: 4;
    uint64_t _reserved_: 60;
})

TypedefStruct(XCR0, {
    // 0
    unsigned _1_x87_state: 1;
    unsigned SSE_state: 1;
    unsigned AVX_state: 1;
    unsigned BNDREG_state: 1;
    unsigned BNDCSR_state: 1;
    unsigned opmask_state: 1;
    unsigned ZMM_Hi256_state: 1;
    unsigned Hi16_ZMM_state: 1;
    // 8
    unsigned _0_reserved_0: 1;
    unsigned PKRU_state: 1;
    uint64_t _0_reserved_1: 54;
    // 64
})

typedef uint16_t SegmentRegister;

TypedefStruct2SameContents(GDTR, IDTR, {
    uint16_t limit;
    uint64_t base;
})

typedef int16_t TR;
typedef int16_t LDTR;

// MSR

TypedefStruct(IA32_EFER, {
    unsigned syscall_enable: 1;
    unsigned _reserved_0: 7;
    unsigned ia32e_enable: 1;
    unsigned _reserved_1: 1;
    unsigned ia32e_active: 1;
    unsigned exec_disable_bit_enable: 1;
    uint64_t _reserved_2: 52;
})

#pragma pack()

#endif //CPU_TYPING_X86_64_IA32E_64_REGISTER_H
