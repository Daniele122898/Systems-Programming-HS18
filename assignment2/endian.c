#include<stdio.h>

void EndianCheck() {
    // first lets create a test variable
    int i = 1; // this is now represented with ..001 or 100.. depending on if its little or big endian
    // now lets get a pointer to that
    int* p = &i; // this now points to the beginning of the address of i.
    char* c = (char*)p; // converting the int* to char* makes it that the first byte of the int is now pointed to by the char*
    // we can now determine what endian this PC is using by checking if the value fo the char* is 1 or 0.
    if(*c == 1) {
        printf("This computer is little endian\n");
    } else {
        printf("this computer is big endian\n");
    }
}

int main(int argc, char** argv) {
    EndianCheck();
}