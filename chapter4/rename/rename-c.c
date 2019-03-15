#include <stdio.h>

int main()
{
	int ret;
	char *oldname = "hello.c";
	char *newname = "newhello.c";
	ret = rename(oldname, newname);
	if(ret == 0)
		printf("Renamed successfully\n");
	else
		printf("Unable to rename the file\n");
	return 0;
}
