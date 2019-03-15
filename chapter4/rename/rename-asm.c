#include <stdio.h>

int main()
{
	int ret;
	char *oldname = "hello.c";
	char *newname = "newhello.c";
	asm volatile(
		"movl %2, %%ecx\n\t"
		"movl %1, %%ebx\n\t"
		"movl $0x26, %%eax\n\t"
		"int $0x80"
		: "=a"(ret)
		: "b"(oldname), "c"(newname)
	);
	if(ret == 0)
		printf("Renamed successfully\n");
	else
		printf("Unable to rename the file\n");
	return 0;
}
