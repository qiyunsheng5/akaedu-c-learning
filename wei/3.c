#include <stdio.h>


void put_hex(int i)
{
	char hex[16] = "0123456789abcdef";
	putchar(hex[i]);
}

void put_char_hex(char bt)
{
	put_hex((bt>>4) & 0x0f);
	put_hex((bt>>0) & 0x0f);
}


void put_int_hex(int num)
{
	int i;
	putchar('0');
//	putchar('x');
	for(i = 10; i >= 0; i--)
	{
		put_hex(((unsigned)num>>3*i) & 0x07);
	}
	putchar('\n');
}

int main(void)
{

	put_int_hex(100);

	return 0;
}
