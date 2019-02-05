#include <stdio.h>
#include <stdlib.h>
#include "secret.h"
#include <assert.h>


int main(int argc, char **argv){
	char *input = NULL;
	size_t length = 0;

	if (argc > 1) {
		input = argv[1];
	} else {
		ssize_t s = getline(&input, &length, stdin);
        assert(s>0);
	}

	secret(input);

	printf("well done\n");
	return 0;
}
