#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	int bil;

	for (bil = 0; bil <= 5; bil++)
	{
		printf("%i\n", bil);
		continue;
		printf("Bagian ini dilewatkan.");
	}

	_getch();
	return 0;
}