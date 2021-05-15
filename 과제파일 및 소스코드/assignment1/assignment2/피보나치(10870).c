// 자료구조 및 알고리즘
//21-1 피보나치(10870)

#include <stdio.h>

int Fibonacci_sum(int n);

int main (void) {
	int n;
	scanf("%d", &n);
	
	printf("%d", Fibonacci_sum(n));
	return 0;
}

int Fibonacci_sum(int n) {

	if(n == 0) {
		return 0;
	}
	else if (n == 1 || n==2) {
		return 1;
	}
	else {
		return Fibonacci_sum(n-1) + Fibonacci_sum(n-2);
	}			
}
