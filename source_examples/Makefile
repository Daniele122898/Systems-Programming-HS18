
bufdemo-s: bufdemo.c
	gcc -D_FORTIFY_SOURCE=0 -fno-stack-protector -O -S bufdemo.c

bufdemo: bufdemo.c
	gcc -D_FORTIFY_SOURCE=0 -fno-stack-protector -O bufdemo.c -o bufdemo