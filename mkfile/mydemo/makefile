cc = gcc
mydata = `date`
prj = $(notdir $(PWD))
SRC = $(wildcard *.c)
h = $(wildcard *.h)
OBJ = $(SRC:.c=.o)

all: $(prj)
	@echo finished!

dep:
	-rm .depend
	for i in $(SRC);do gcc -MM $$i >> .depend;done
	cat .depend

$(prj): $(OBJ)
	$(cc) $^ -o $@

clean:
	rm *.o
	rm $(prj)

