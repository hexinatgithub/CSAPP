#include "csapp.h"

unsigned int snooze(unsigned int secs){
	unsigned int rc = sleep(secs);
	printf("Slept for %u of %u secs.\n", secs - rc, secs);
	return rc;
}

void handler(int sig){
	return;
}

int main(int argc, char const *argv[])
{
	if(signal(SIGINT, handler) == SIG_ERR){
		unix_error("signal error");
		printf("signal error\n");
		exit(0);
	}

	if(argc != 2)
		printf("wrong argument\n");

	int secs = atoi(argv[1]);
	snooze(secs);

	return 0;
}