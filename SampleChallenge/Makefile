#
# HackerRank - SampleChallenge Makefile

# Variables
CC=gcc
LINK=gcc
CFLAGS=-c -Wall -I. -fpic -g
LINKFLAGS=-L. -g
LIBFLAGS=-shared -Wall

# Files to build
OBJFILES=SampleChallenge.o

# Suffix rules
.SUFFIXES: .c .o

.c.o:
	$(CC) -c $(CFLAGS)  -o $@ $<

# Productions
SampleChallenge : $(OBJFILES)
	$(LINK) $(OBJFILES) -o $@

clean:
	rm -f $(TARGETS) $(OBJFILES)

# Dependancies
sample.o : SampleChallenge.c
