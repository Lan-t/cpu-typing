//
// Created by tia on 2020/09/13.
//

#ifndef  CPU_TYPING_X86_64_IA32E_64__MACRO_H
#define  CPU_TYPING_X86_64_IA32E_64__MACRO_H

#define TypedefStruct(name, contents) typedef struct name contents name;
#define TypedefStruct2SameContents(name1, name2, contents)\
typedef struct name1 contents name1;\
typedef struct name2 contents name2;

#endif // CPU_TYPING_X86_64_IA32E_64__MACRO_H
