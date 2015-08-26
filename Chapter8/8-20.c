#include "csapp.h"

int main(int argc, char const *argv[], const char *envp[])
{
	execve("bin/ls", argv, envp);
	return 0;
}