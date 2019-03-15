#include <stdio.h>

int main()
{
	int input, output, tmp;
	input = 1;
	__asm__ __volatile__(
	"movl $0, %%eax;\n\t"
	"movl %%eax, %1;\n\t"
	"movl %2, %%eax;\n\t"
	"movl %%eax, %0;\n\t"
	: "=m" (output), "=m" (tmp)
	: "c" (input)
	: "eax"
	);
	printf("%d%d\n", tmp, output);
	return 0;
}
