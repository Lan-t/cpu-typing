#include <stdio.h>
#include <assert.h>

#include "include/x86_64/IA32e-64/descriptor.h"
#include "include/x86_64/IA32e-64/register.h"

#define assertSize(type, size) assert(sizeof(type) == (size))

void test_segment_descriptor_size() {
    assertSize(FreeSegmentDescriptor, 8);
    assertSize(DataSegmentDescriptor, 8);
    assertSize(CodeSegmentDescriptor, 8);
    assertSize(SystemSegmentDescriptor, 8);
    assertSize(CallGateDescriptor, 16);
    assertSize(IDTGateDescriptor, 16);
    assertSize(LDTDescriptor, 16);
    assertSize(TSSDescriptor, 16);
}

void test_register_size() {
    assertSize(RFLAGS, 8);

    assertSize(CR0, 8);
    assertSize(CR3, 8);
    assertSize(CR3_PCIDE0, 8);
    assertSize(CR4, 8);
    assertSize(CR8, 8);

    assertSize(GDTR, 10);
    assertSize(IDTR, 10);

    assertSize(IA32_EFER, 8);
}

int main() {
    test_segment_descriptor_size();
    test_register_size();

    puts("test finished");
    return 0;
}
