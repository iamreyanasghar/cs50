#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *s = malloc(4);
	printf("s: ");
	scanf("%s", s);
	printf("Value of s is: %s\n", s);
	free(s);
}
