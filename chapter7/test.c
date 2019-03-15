void * handle = dlopen("libdllibexample.so", RTLD_NOW);
int (*func)(void);
func = dlsym(handle, "DynamicalLoadingLibApi");
func();
