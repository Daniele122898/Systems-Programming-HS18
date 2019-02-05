CFLAGS  = -Wall -Wextra -D_DEFAULT_SOURCE -std=c99 -O2 -g -fno-tree-vectorize

mmul: mmul.c
	$(CC) $(CFLAGS) mmul.c -o mmul

.PHONY: clean
clean:
	$(RM) -r ./mmul ./mmul.dSYM
