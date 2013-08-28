src = $(wildcard *.c)
obj = $(patsubst %.c, %, $(src))
cc = gcc

all:$(obj)
%:%.c
	$(cc) -o $@ $<

clean:
	rm -f $(obj)
	rm -f *~

.PHONY: clean
test:
	time  -p ./maopao
	time  -p ./xuanze
	time  -p ./charu
