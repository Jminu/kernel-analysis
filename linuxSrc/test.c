#include <stdio.h>

#ifdef TEST
#define NUM 1
#else
#define NUM 0
#endif

static int g_flag = NUM;

int main()
{
	if (g_flag == 1)
	{
		printf("run code\n");
	}


	return 0;
}
