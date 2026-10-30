#include <stdio.h>

int main(void)
{
	unsigned int a = 0;
	a = a-1;
	printf("%u\n", a);

	int x = 2147483647;
	x = x + 1;

	char c = 'A';
	printf("%d\n", c + 1);

	return 0;
}
