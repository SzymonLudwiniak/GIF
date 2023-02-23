#include <stdio.h>
#include "../include/gifHeader.h"


int main(int argc, char *argv[])
{
    char* fileName = argv[argc-1];
    printf("\n%s\n", fileName);

    FILE * file = fopen(fileName, "rb");

    gifHeader header;

    fread(&header.signature, sizeof(char), 3, file);
    fread(&header.version, sizeof(char), 3, file);
    fread(&header.width, sizeof(uint16_t), 1, file);
    fread(&header.height, sizeof(uint16_t), 1, file);
    fread(&header.GCT, sizeof(uint8_t), 1, file);
    fread(&header.bgColor, sizeof(uint8_t), 1, file);
    fread(&header.ratio, sizeof(uint8_t), 1, file);

    printf("\n\n\n");
    printf("signature: %.3s, version: %.3s\n", header.signature, header.version);
    printf("width: %u\nheight: %u\n", header.width, header.height);
    printf("global color table: %b\n", header.GCT);
    printf("background color index: 0x%x, b%b\n", header.bgColor, header.bgColor);
    printf("aspect ratio: %x\n", header.ratio);

    return 0;
}