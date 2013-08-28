ENTRY(main)
SECTIONS
{
	. = 0x0;
	.text :
	{
		1.o (.text)
		2.o (.text)
		3.o (.text)
	}
	.data :{*(.data) }
	.bss : {*(.bss) }
}
