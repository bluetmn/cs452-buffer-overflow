#include <stdio.h> /* for printf() */
#include <stdlib.h> /* for exit() */

int your_fcn(void) {
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
