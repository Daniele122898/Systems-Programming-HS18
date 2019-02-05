CFLAGS=-m64 -std=c99 -D_XOPEN_SOURCE=600
CFLAGSDBG=-ggdb -g $(CFLAGS)
LIB=./libdump.a

pt: pagetables.c $(LIB)
	$(CC) $(CFLAGS) pagetables.c $(LIB) -o pt

debug: pagetables.c $(LIB)
	$(CC) $(CFLAGSDBG) pagetables.c $(LIB) -o pt.dbg

clean:
	$(RM) ./pt ./pt.dbg
