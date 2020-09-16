//
// Created by tia on 2020/09/13.
//

#ifndef CPU_TYPING_X86_64_IA32E_64_SEGMENT_H
#define CPU_TYPING_X86_64_IA32E_64_SEGMENT_H

#include <stdint.h>
#include "../../../_macro.h"

#pragma pack(1)

TypedefStruct(TaskStateSegment, {
    uint32_t _reserved_0;
    uint32_t rsp_0_low;
    uint32_t rsp_0_high;
    uint32_t rsp_1_low;
    uint32_t rsp_1_high;
    uint32_t rsp_2_low;
    uint32_t rsp_2_high;
    uint32_t _reserved_1;
    uint32_t _reserved_2;
    uint32_t ist1_low;
    uint32_t ist1_high;
    uint32_t ist2_low;
    uint32_t ist2_high;
    uint32_t ist3_low;
    uint32_t ist3_high;
    uint32_t ist4_low;
    uint32_t ist4_high;
    uint32_t ist5_low;
    uint32_t ist5_high;
    uint32_t ist6_low;
    uint32_t ist6_high;
    uint32_t ist7_low;
    uint32_t ist7_high;
    uint32_t _reserved_3;
    uint32_t _reserved_4;
    uint16_t _reserved_5;
    uint16_t io_map_base;
})

#pragma pack()

#endif //CPU_TYPING_X86_64_IA32E_64_SEGMENT_H
