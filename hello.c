#v0.1
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv, char **envp)

{

	struct timespec sleeptime;

	sleeptime.tv_sec = 1;
	sleeptime.tv_nsec= 0;

	while (1) {

	printf("Hello World\n");
	clock_nanosleep( CLOCK_MONOTONIC, 0, &sleeptime, NULL);
	
	}

	return 0;
}


