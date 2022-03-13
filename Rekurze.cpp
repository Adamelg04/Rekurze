#include <stdio.h>

long bunky(int x) {
	if (x <= 1) return 1;
	else return 2 * bunky(x - 1);
}

long fibonacci(int x) {
	if (x == 0) return 0;
	else if (x <= 1) return 1;
	else return fibonacci(x - 1) + fibonacci(x - 2);
}

float urok(int x) {
	if (x <= 1) return x * 1.01;
	else return urok(x - 1) * 1.01;
}

int main() {


	printf("Bunky\n");
	printf("1. %d\n", bunky(9));
	printf("Fibonacci\n");
	printf("1. %d\n", fibonacci(0));
	printf("2. %d\n", fibonacci(1));
	printf("3. %d\n", fibonacci(2));
	printf("4. %d\n", fibonacci(3));
	printf("5. %d\n", fibonacci(4));
	printf("6. %d\n", fibonacci(5));
	printf("Slozeny urok\n");
	printf("1. %f\n", urok(1));
	printf("2. %f\n", urok(2));
	printf("3. %f\n", urok(3));
	printf("4. %f\n", urok(4));
}