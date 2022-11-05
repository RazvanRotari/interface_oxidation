#include <stdio.h>

double numbers(int x, double y, int *refi) {
	printf("x=%d, y=%f, refi=%d", x, y, *refi);
	return 3.14;
}

char* strings(char* data) {
	printf("data=%s\n", data);
	return "Hello world";
}


void* pointers(char** retdata) {
	*retdata = (char*)malloc(30);
	return NULL;
}


void pass_a_struct(MyStruct* s) {
	printf("We get the struct with s->a", s->a);
}
