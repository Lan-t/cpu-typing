//
// Created by tia on 2020/09/16.
//

#ifndef CPU_TYPING_INCLUDE_X86_64_IA32E_64_PAGING_H
#define CPU_TYPING_INCLUDE_X86_64_IA32E_64_PAGING_H

#include <stdint.h>
#include "../../../_macro.h"

#ifndef MAXPHYADDR
#define MAXPHYADDR 40
#endif

#pragma pack(1)

TypedefStruct3SameContents(
        PageMapLevel4Entry,
        PageDirectoryPointerTableEntry,
        PageDirectoryEntry, {
            unsigned present: 1;
            unsigned read_write: 1;
            unsigned user_supervisor: 1;
            unsigned pageLevel_write_through: 1;
            unsigned pageLevel_cache_disable: 1;
            unsigned accessed: 1;
            unsigned _ignore_0: 1;
            unsigned _0_fill_ps: 1;
            unsigned _ignore_1: 4;
            unsigned phyAddr: MAXPHYADDR - 12;  // addr >> 12
            unsigned _0_fill_addrHigh: 52 - MAXPHYADDR;
            unsigned _ignore_2: 11;
            unsigned xd: 1;
        }
)

TypedefStruct(PageDirectoryPointerTableEntry_1GPage, {
    unsigned present: 1;
    unsigned read_write: 1;
    unsigned user_supervisor: 1;
    unsigned pageLevel_write_through: 1;
    unsigned pageLevel_cache_disable: 1;
    unsigned accessed: 1;
    unsigned dirty: 1;
    unsigned _1_fill_ps: 1;
    unsigned global: 1;
    unsigned _ignore_0: 3;
    unsigned PAT: 1;
    unsigned _0_reserved_: 17;
    unsigned phyAddr: MAXPHYADDR - 30;  // addr >> 30
    unsigned _0_fill_addrHigh: 52 - MAXPHYADDR;
    unsigned _ignore_1: 7;
    unsigned protect_key: 4;
    unsigned xd: 1;
})

TypedefStruct(PageDirectoryEntry_2MPage, {
    unsigned present: 1;
    unsigned read_write: 1;
    unsigned user_supervisor: 1;
    unsigned pageLevel_write_through: 1;
    unsigned pageLevel_cache_disable: 1;
    unsigned accessed: 1;
    unsigned dirty: 1;
    unsigned _1_fill_ps: 1;
    unsigned global: 1;
    unsigned _ignore_0: 3;
    unsigned PAT: 1;
    unsigned _0_reserved_: 8;
    unsigned phyAddr: MAXPHYADDR - 21;  // addr >> 21
    unsigned _0_fill_addrHigh: 52 - MAXPHYADDR;
    unsigned _ignore_1: 7;
    unsigned protect_key: 4;
    unsigned xd: 1;
})

TypedefStruct(PageTableEntry, {
    unsigned present: 1;
    unsigned read_write: 1;
    unsigned user_supervisor: 1;
    unsigned pageLevel_write_through: 1;
    unsigned pageLevel_cache_disable: 1;
    unsigned accessed: 1;
    unsigned dirty: 1;
    unsigned PAT: 1;
    unsigned global: 1;
    unsigned _ignore_0: 3;
    unsigned phyAddr: MAXPHYADDR - 12;  // addr >> 12
    unsigned _0_fill_addrHigh: 52 - MAXPHYADDR;
    unsigned _ignore_1: 11;
    unsigned xd: 1;
})

#pragma pack()

#endif //CPU_TYPING_INCLUDE_X86_64_IA32E_64_PAGING_H
