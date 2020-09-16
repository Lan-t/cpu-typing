//
// Created by tia on 2020/09/17.
//

#ifndef CPU_TYPING_INCLUDE_X86_64_IA32E_64_INTERRUPT_FRAME_H
#define CPU_TYPING_INCLUDE_X86_64_IA32E_64_INTERRUPT_FRAME_H

#include <stdint.h>
#include "../../../_macro.h"

TypedefStruct(InterruptFrameWithErrorCode, {
    uint64_t error_code;
    uint64_t rip;
    uint64_t cs;
    uint64_t rflags;
    uint64_t rsp;
    uint64_t ss;
})

TypedefStruct(InterruptFrameNoErrorCode, {
    uint64_t rip;
    uint64_t cs;
    uint64_t rflags;
    uint64_t rsp;
    uint64_t ss;
})

typedef union InterruptFrame {
    struct InterruptFrameWithErrorCode withErrorCode;
    struct InterruptFrameNoErrorCode noErrorCode;
} InterruptFrame;

#endif //CPU_TYPING_INCLUDE_X86_64_IA32E_64_INTERRUPT_FRAME_H
