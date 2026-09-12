#ifndef _VWF_H_INCLUDE
#define _VWF_H_INCLUDE

#include <gbdk/platform.h>

#include <stdint.h>

#if defined(NINTENDO)
#define DEVICE_TILE_SIZE_BITS 4
#elif defined(SEGA)
#define DEVICE_TILE_SIZE_BITS 5
#endif

#define __VWF_BANK_PREFIX(A) __bank_##A
#define TO_VWF_FARPTR(A) {.bank = (char)&(__VWF_BANK_PREFIX(A)), .ptr = (void *)&(A)}

#define RECODE_7BIT 1
#define FONT_VWF 2

typedef struct vwf_farptr_t {
    UINT8 bank;
    void * ptr;
} vwf_farptr_t;

typedef struct font_desc_t {
    uint8_t attr;
    const uint8_t * recode_table;
    const uint8_t * widths;
    const uint8_t * bitmaps;
} font_desc_t;

#endif