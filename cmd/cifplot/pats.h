#define NLAYERS  9

struct {
     char *IName;
     int IPat[8];
     } pats[NLAYERS] = 

{ "null", 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  	  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  "ND"  , 0x00000000, 0x03030303, 0x48484848, 0x03030303,
	  0x00000000, 0x30303030, 0x84848484, 0x30303030,
  "NI"	, 0x00000000, 0xCCCCCCCC, 0x00000000, 0xCCCCCCCC,
	  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  "NP"	, 0x08080808, 0x04040404, 0x02020202, 0x01010101,
  	  0x80808080, 0x40404040, 0x20202020, 0x10101010,
  "NC"	, 0x11111111, 0x30303030, 0x71717171, 0x30303030,
	  0x11111111, 0x03030303, 0x17171717, 0x03030303,
  "NM"	, 0x22222222, 0x00000000, 0x88888888, 0x00000000,
  	  0x22222222, 0x00000000, 0x88888888, 0x00000000,
  "NB"	, 0xC0C0C0C0, 0x81818181, 0x03030303, 0x06060606,
	  0x03030303, 0x81818181, 0xC0C0C0C0, 0x60606060,
  "NG"	, 0x1C1C1C1C, 0x3E3E3E3E, 0x36363636, 0x3E3E3E3E,
	  0x1C1C1C1C, 0x00000000, 0x00000000, 0x00000000,
  "NX"	, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
  	  0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF
  };