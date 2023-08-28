#include "functions.h"
unsigned mask_and_merge(unsigned x, unsigned y) 
{
  return (x & 0xFF) | (y & 0xffffff00);
}

unsigned replace_byte(unsigned x, int i, unsigned char b) 
{
	unsigned mask = b << (i * 8);
	unsigned mask1 = ~(0xFF << (i*8));

  return ((x&mask1) | mask);
}

unsigned lower_one_mask(unsigned x, unsigned n)
{
	int mask = ((1<<n)-1);
  return x & mask;
}
