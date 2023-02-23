#ifndef GIFHEADER
#define GIFHEADER

#include <stdint.h>


typedef struct {
    // HEADER
    uint8_t signature[3];   //has to be GIF
    uint8_t version[3];   
    // LSD (logical screen descriptor) 
    uint16_t width;         //picture width
    uint16_t height;        //picture width
    uint8_t GCT;            //global color table
    uint8_t bgColor;
    uint8_t ratio;          //aspect ratio
} gifHeader;


#endif  