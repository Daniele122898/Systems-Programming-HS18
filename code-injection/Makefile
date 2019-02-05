all: bufdemo bufdemo.s exploit_1 
CFLAGS=-fno-stack-protector -z execstack -no-pie -O1
#-D_FORTIFY_SOURCE=0

bufdemo: bufdemo.c
	gcc  ${CFLAGS} -g -o bufdemo bufdemo.c 

bufdemo.s: bufdemo.c
	gcc ${CFLAGS} -S bufdemo.c 

exploit_1: bufdemo
	./gen_exploit.py something_unexpected exploit_1

clean:
	rm -f exploit_1 exploit_2 bufdemo bufdemo.s
