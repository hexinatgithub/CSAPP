#include "csapp.h"

void change(int fd, int size)
{
	char *bufp;
	bufp = Mmap(NULL, size, PROT_WRITE, MAP_SHARED, fd, 0);
	bufp[0] = 'J';
	printf("%s\n", bufp);
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf("usage: %s <filename>\n", argv[0]);
		exit(0);
	}
	struct stat stat;
	int fd = Open(argv[1], O_RDWR, 0);
	fstat(fd, &stat);
	change(fd, stat.st_size);
	exit(0);
}
