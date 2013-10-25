#
# HackerRank - InertionSort1 Makefile

# Variables
CC=gcc
LINK=gcc
CFLAGS=-c -Wall -I. -fpic -g
LINKFLAGS=-L. -g
LIBFLAGS=-shared -Wall

# Files to build
OBJFILES=InsertionSort1.o

# Suffix rules
.SUFFIXES: .c .o

.c.o:
	$(CC) -c $(CFLAGS)  -o $@ $<

# Productions
InsertionSort1 : $(OBJFILES)
	$(LINK) $(OBJFILES) -o $@

clean:
	rm -f $(TARGETS) $(OBJFILES)

# Dependancies
sample.o : InsertionSort1.c
