#include <stdio.h>     // needed for the definition of NULL, printf
#include <stdlib.h>    // needed for malloc, free
#include <assert.h>    // needed for the definition of assert()
#include <string.h>    // for strlen

int is_space_or_nullbyte(char c) {
  if ((c == ' ') ||   // space
      (c == '\f') ||  // form feed
      (c == '\n') ||  // newline
      (c == '\0') ||  // nullbyte
      (c == '\r') ||  // carriage return
      (c == '\t') ||  // horizontal tab
      (c == '\v')) {  // vertical tab
    return 1;
  }
  return 0;
}

int FirstWord(char* string, char** word) {
    // first check that string is not null
    if ((string == NULL) || (string[0] == '\0')) return -1;
    int i=0;
    // check if we hit a whitespace or null-byte
    while (!is_space_or_nullbyte(string[i])) { ++i; }
    // we hit a space or nullbyte
    *word = (char*) malloc(sizeof(char)*i+1); // i is index of last char +1 for null-byte.
    if (*word == NULL) { // if malloc fails return -2 to show out of memory
    return -2;
  } 
    // now lets copy the word over
    for (int j=0; j<i; j++) {
        (*word)[j] = string[j];
    }
    // insert nullbyte
    (*word)[i+1] = '\0';
    return i;
}

int main(int argc, char* argv[]) {
    char *string1 = "Hello world!";
  char *string2 = "Hello!";
  char *string3 = "";
  char *string4 = NULL;
  char *retstr;
  int retval;

  retval = FirstWord(string1, &retstr);
  printf("Should be 'Hello':  '%s'\n", retstr);
  assert(retval == 5);
  free(retstr);

  retval = FirstWord(string2, &retstr);
  printf("Should be 'Hello!':  '%s'\n", retstr);
  assert(retval == 6);
  free(retstr);

  retval = FirstWord(string3, &retstr);
  assert(retval == -1);

  retval = FirstWord(string4, &retstr);
  assert(retval == -1);
  
  return 0;
}