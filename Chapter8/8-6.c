#include "csapp.h"

int main(int argc, char const *argv[], char *envp[])
{
	printf("Command line arguments:\n");
	for (int i = 0; i < argc; ++i)
	{
		printf("	argv[ %d]:%s\n", i, argv[i]);
	}
	int i = 0;
	printf("Environment variables:\n");
	while(envp[i] != NULL)
		printf("	envp[ %d]:%s\n", i, envp[i++]);
	return 0;
}