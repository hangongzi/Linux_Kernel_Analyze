#include <stdio.h>
#include "dllibexample.h"

#define SUCCESS 0
#define FAILURE (-1)

int DynamicalLoadingLibApi()
{
	printf("This is a Dynamical Loading libary!\n");
	return SUCCESS;
}
