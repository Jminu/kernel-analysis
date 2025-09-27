#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

#define SUM(x, y) ((x) + (y))

int main(void)
{
	printf("nomal func : %d\n", sum(7, 8));
	printf("macro func : %d\n", SUM(7, 8));

	return 0;
}

