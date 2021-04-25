// 자료구조 및 알고리즘
//21-1 제로(10773)

#include <stdio.h>

int stack[100001];
int top= -1;

void push(int a) {
	stack[++top] = a;
}

int pop() {
	return stack[top--];
}

int main(void) {
	int n;
	int input;
	int res = 0;
	int i;
	scanf("%d", &n); //n입력받음

	// 스택에 입력(push)와 출력(pop)작업 수행
	for (i = 0; i < n; i++) {
		scanf("%d", &input); //입력받음

	if (input == 0) {

	pop(); // 0이면 지운다
	}
	else
	push(input); // 0이 아니면 스택에 쌓는다.
	}

	//printf("%d\n", size);

	// 스택 값 합구하기
	for (i = 0; i <= top; i++) {
	res += stack[i];
	}

	printf("%d", res); // 결과값 출력

	return 0;

}

