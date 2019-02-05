#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

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
void echo(unsigned buf_size) {
  char buf[buf_size]; /* Way too small! */    
  char * buf_rt = fgets(buf, 4096, stdin);
  puts(buf);
}

int main() 
{  
  printf("Type a string:");
  echo(64); 
  return 0;
}
