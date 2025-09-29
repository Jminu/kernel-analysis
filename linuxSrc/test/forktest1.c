#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid = fork();
	
	if (pid == -1) {
		return 0;
	}
	else if (pid == 0) {
		printf("child proc sleep start!\n");
	}
	else {
		printf("parent proc\n");
	}

	sleep(5);
	return 0;
}
