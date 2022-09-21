#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x = 100;
	int y = 200;
	
	int result = (x < y) ? x : y;
	printf("Result : %d", result);
	
	return 0;
}
