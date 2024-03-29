#include "../../include/lib/ports.h"

inline void outb(u16 port, u8 val) {
    asm volatile ("outb %1, %0" :: "a"(val), "Nd"(port));
}

inline u8 inb(u16 port) {
    u8 val;
    asm volatile ("inb %0, %1" : "=a"(val) : "Nd"(port));
    return val;
}
