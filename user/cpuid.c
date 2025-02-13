#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "riscv.h"
#include <kernel/defs.h>

uint64 sys_hartid(void) {
    return cpuid();
}