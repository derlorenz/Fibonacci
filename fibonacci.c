#include<stdio.h>

int fib(int i) {
	if(i>1) {
		return fib(i-1)+fib(i-2);
	}
	else {
		return 1;
	}
}

int main() {
	int i=0;
	printf("Which Fibonacci number do you want to be created?\n");
	scanf("%i", &i);
	printf("%i\n", fib(i));
	return 1;
}