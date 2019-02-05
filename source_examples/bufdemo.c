#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Do something undesirable */
void something_unexpected() {
  puts("What are we doing here?\n");
  // Do something really bad here...
  sleep(1);
  puts("Do something strange and unexpected...\n");
  sleep(1);
  puts("Exit normally\n");
  exit(0);
}

/* Echo Line */
void echo() {
  char buf[4]; /* Way too small! */    
  gets(buf);    
  puts(buf);
}

int main() 
{  
  printf("Type a string:");
  echo(); 
  return 0;
}