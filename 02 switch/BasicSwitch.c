#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int data = 5;

	switch(data % 2)
	{
		case 0 : 
			printf("Number %d is even.", data);
			break;
		case 1 : 
			printf("Number %d is odd.", data);
			break;
		default :
			printf("N/A");
			break;
	}

	return 0;
}
