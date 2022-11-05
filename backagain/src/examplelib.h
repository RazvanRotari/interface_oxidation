double numbers(int x, double y, int* refi);

char* strings(char* data);

void* pointers(char** retdata);

struct SecondStruct {
	int x;
	int y;
};

struct MyStruct {
	int a;
	double b;
	char* c;
	union {
		struct SecondStruct e;
		long long f;
	} d;
};

void pass_a_struct(struct MyStruct* s) ;

class MyClass {
	public:
		MyClass();
		MyClass(int);
		int a;
		int func();
};
