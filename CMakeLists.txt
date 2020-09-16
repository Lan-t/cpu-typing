cmake_minimum_required(VERSION 3.16)
project(cpu_typing C)

set(CMAKE_C_STANDARD 11)

# for clion code completion
add_library(cpu_typing
        test.c
        include/x86_64/IA32e-64/descriptor.h
        _macro.h
        include/x86_64/IA32e-64/segment.h
        include/x86_64/IA32e-64/register.h
        include/x64_IA32e64.h
        include/x86_64/IA32e-64/paging.h include/x86_64/IA32e-64/interrupt_frame.h)

add_executable(test_exec test.c)
