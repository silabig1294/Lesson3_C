#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char result;
	printf("Enter your first character : ");
	scanf("%c", &result);

	switch (result)
	{
		case 'a': case 'A':
			printf("Your character is %c", result);
			break;
		case 'n': case 'N':
			printf("Cancel your data");
			break;
		default:
			printf("Invalid command");
			break;
	}

	return 0;
}
