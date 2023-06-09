#ifndef TEXT_H
#define TEXT_H

typedef struct
{
	unsigned char name[3];
	unsigned char array[32];
}chinese;

chinese code text[]=
{
	//取模方式为列行取模
	"现",
	0x04,0x84,0x84,0xFC,0x84,0x84,0x00,0xFE,0x02,0x02,0xF2,0x02,0x02,0xFE,0x00,0x00,
	0x20,0x60,0x20,0x1F,0x10,0x90,0x40,0x23,0x18,0x06,0x01,0x7E,0x80,0x83,0xE0,0x00,/*"现"*/
	"有",
	0x04,0x04,0x04,0x84,0xE4,0x3C,0x27,0x24,0x24,0x24,0x24,0xE4,0x04,0x04,0x04,0x00,
	0x04,0x02,0x01,0x00,0xFF,0x09,0x09,0x09,0x09,0x49,0x89,0x7F,0x00,0x00,0x00,0x00,/*"有"*/
	"货",
	0x20,0x10,0x08,0x7C,0x03,0x10,0x10,0x10,0x3F,0x48,0x48,0x44,0x44,0x70,0x00,0x00,
	0x00,0x80,0x80,0x9F,0x41,0x41,0x21,0x1D,0x01,0x21,0x21,0x5F,0x40,0x80,0x00,0x00,/*"货"*/
	"物",
	0x40,0x3C,0x10,0xFF,0x10,0x10,0x20,0x10,0x8F,0x78,0x08,0xF8,0x08,0xF8,0x00,0x00,
	0x02,0x06,0x02,0xFF,0x01,0x01,0x04,0x42,0x21,0x18,0x46,0x81,0x40,0x3F,0x00,0x00,/*"物"*/
	
};
#endif