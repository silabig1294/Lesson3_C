#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x = 0;

	if(x >= 100)
	{
		if (x >= 1000)
		{
			printf("Number is greater than or equal 1000");
		}else{
			printf("Number is less than 1000");
		}
	}
	else if (x == 0){
		printf("Number is 0");
	}
	else
	{
		printf("less than 100");
	}

	return 0;
}
