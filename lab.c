#include <stdio.h> /* for printf() */
#include <stdlib.h> /* for exit() */
#include <string.h>

int your_fcn(void) {
	char buf[21];
	strcpy(buf, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\x58\x06\x40");
	return 0;
}

int main(void) {

	int mine = 0; 
	int yours = 0;
	yours = your_fcn(); 
	mine = yours + 1;
	if(mine > yours)
		printf("You lost!\n");
	else
		printf("You won!\n");
	exit(0);
}
