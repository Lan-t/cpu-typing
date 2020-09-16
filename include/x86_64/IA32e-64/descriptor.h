//
// Created by tia on 2020/09/13.
//

#ifndef  CPU_TYPING_X86_64_IA32E_64_DESCRIPTOR_H
#define  CPU_TYPING_X86_64_IA32E_64_DESCRIPTOR_H

#include <stdint.h>
#include "../../../_macro.h"
#include "register.h"

#pragma pack(1)

TypedefStruct(FreeSegmentDescriptor, {
    uint64_t available_1: 40;
    unsigned type: 4;
    unsigned descriptor_type: 1;
    unsigned dpl: 2;
    unsigned _0_fill_p: 1;
    uint16_t available_2;
})

TypedefStruct(DataSegmentDescriptor, {
    // 0
    uint16_t limit_15_00;
    // 16
    uint16_t base_15_00;
    // 32
    uint8_t base_23_16;
    unsigned accessed: 1;
    unsigned writeable: 1;
    unsigned expansion_direction: 1;
    unsigned _0_fill_dt: 1;
    unsigned _1_fill_s: 1;
    unsigned dpl: 2;
    unsigned present: 1;
    // 48
    unsigned limit_19_16: 4;
    unsigned available: 1;
    unsigned _0_reserved_: 1;
    unsigned big: 1;
    unsigned granularity: 1;
    uint8_t base_31_24;
    // 64
})

TypedefStruct(CodeSegmentDescriptor, {
    // 0
    uint64_t _ignore_: 40;
    unsigned accessed: 1;
    unsigned readable: 1;
    unsigned conforming: 1;
    unsigned _1_fill_dt: 1;
    unsigned _1_fill_s: 1;
    unsigned dpl: 2;
    unsigned present: 1;
    // 48
    unsigned _ignore__: 4;
    unsigned available: 1;
    unsigned long_: 1;
    unsigned default_: 1;
    unsigned granularity: 1;
    uint8_t _ignore___;
    // 64
})

TypedefStruct(SystemSegmentDescriptor, {
    // 0
    uint16_t limit_15_00;
    // 16
    uint16_t base_15_00;
    // 32
    uint8_t base_23_16;
    unsigned type: 4;
    unsigned _0_fill_s: 1;
    unsigned dpl: 2;
    unsigned present: 1;
    // 48
    unsigned limit_19_16: 4;
    unsigned _reserved_: 1;
    unsigned _0_reserved_: 1;
    unsigned _reserved__: 1;
    unsigned granularity: 1;
    uint8_t base_31_24;
    // 64
})

TypedefStruct(CallGateDescriptor, {
    // 0
    uint16_t offset_15_00;
    SegmentRegister segment_selector;
    // 32
    unsigned param_count: 5;
    unsigned _0_fill_: 3;
    unsigned _0_fill_ty0: 1;
    unsigned _0_fill_ty1: 1;
    unsigned _1_fill_ty2: 1;
    unsigned _1_fill_ty3: 1;
    unsigned _0_fill_s: 1;
    unsigned dpl: 2;
    unsigned present: 1;
    // 48
    uint16_t offset_31_16;
    // 64
    uint32_t offset_63_32;
    // 96
    uint8_t _reserved_;
    unsigned _0_fill_ty: 5;
    uint32_t _reserved__: 19;
    // 128
})

TypedefStruct(IDTGateDescriptor, {
    // 0
    uint16_t offset_15_00;
    SegmentRegister segment_selector;
    // 32
    unsigned ist : 3;
    unsigned _0_fill_ : 5;
    unsigned type : 4;
    unsigned _0_fill_s: 1;
    unsigned dpl : 2;
    unsigned present : 1;
    // 48
    uint16_t offset_31_16;
    // 64
    uint32_t offset_63_32;
    uint32_t _reserved_;
    // 128
})

TypedefStruct2SameContents(LDTDescriptor, TSSDescriptor, {
    // 0
    uint16_t limit_15_00;
    // 16
    uint16_t base_15_00;
    // 32
    uint8_t base_23_16;
    unsigned type: 4;
    unsigned _0_fill_s: 1;
    unsigned dpl: 2;
    unsigned present: 1;
    // 48
    unsigned limit_19_16: 4;
    unsigned available: 1;
    unsigned _0_fill_: 1;
    unsigned _0_fill__: 1;
    unsigned granularity: 1;
    uint8_t base_31_24;
    // 64
    uint32_t base_63_32;
    // 96
    uint8_t _reserved_;
    unsigned _0_fill_ty: 5;
    uint32_t _reserved__: 19;
    // 128
})

#pragma pack()

#endif // CPU_TYPING_X86_64_IA32E_64_DESCRIPTOR_H
