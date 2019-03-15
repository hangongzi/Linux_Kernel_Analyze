#include <stdio.h>
#include <sys/syscall.h>

int main()
{
	int ret;
	char *oldname = "newhello.c";
	char *newname = "hello.c";
	ret = syscall(SYS_rename, oldname, newname);
	if(ret == 0)
		printf("Renamed successfully\n");
	else
		printf("Unable to rename the file\n");

	return 0;
}
