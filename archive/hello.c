#include <stdio.h>

/*
	Print hello message ...
*/
int printHello() {
	printf("Hello fast World!!");
	return 0;
}

/*
 	Main entry function ...
*/
int main() {
	if (printHello() == 0) {
		return 1;	
	}
	return 0;
}



