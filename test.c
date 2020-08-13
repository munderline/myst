

#include<stdio.h>

int test(){
	for (int i = 0; i < 10; ++i) {
		printf("hello------>%d\n", i);
	}
}

int main(int argc, char *argv[])
{
	test();
	return 0;
}
