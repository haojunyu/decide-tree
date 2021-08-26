#*********************#
#* Makefile for C4.5 *#
#*********************#

CFLAGS = -O2
CC = gcc


# gen all object file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY: all clean
all: prog1

clean:
	-rm *.o
