if (Fork() == ) {
	int fd = Open("foo.txt", O_RDONLY, 0); /* fd == 3 */
    Dup2(fd, 3);
    Close(fd);
	Execve("fstatcheck", argv, envp);
}