unsigned int snooze(unsigned int secs){
	unsigned int rc = sleep(secs);
	printf("Slept for %u of %u secs.\n", secs - rc, secs);
	return rc;
}