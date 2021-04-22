#include <stdio.h>
#include <string.h> //strcmp 함수가 내장된 헤더선언

int stack[1000001]; // 횟수 1000001(으)로 제한
int cnt = 0;        // 스택사이즈 저장

void push(int n) {   // stack에 넣을 값 입력(입력시마다 증가)
	stack[cnt] = n;
	cnt++;
}

void pop() {         // stack[cnt] - 가장 최근값; printf출력후 stack[cnt]에 0을 넣어 초기화
	if (cnt != 0) {
		cnt--;
		printf("%d\n", stack[cnt]);
		stack[cnt] = 0;
	}
	else {
		printf("%d\n", -1);  // 더이상 꺼낼 스택이 없을시 -1 출력
	}
}

void size() {
	printf("%d\n", cnt);  // 스택에 저장된 값의 갯수 출력
}

void empty() {
	if (cnt != 0) {
		printf("0\n");   // 스택에 저장된 값이 있을시 0 출력
	}
	else {
		printf("1\n");    // 스택에 저장된 값이 없을시 -1 출력
	}
}

void top() {
	if (cnt != 0) {
		printf("%d\n", stack[cnt - 1]);
	}
	else {
		printf("%d\n", -1);	// 스택에 저장된 값이 없을시 -1 출력
	}
}





int main()
{
	int stack_size; 			//쌓인 스택수 
	scanf("%d", &stack_size);
	char order[100]; 		// 입력 글자크기 최대 100글자로 설정

	for (int i = 0; i < stack_size; i++) {
		scanf("%s", &order);  // 명령어 입력
		if (!strcmp(order, "push")) {
			int n;
			scanf("%d", &n);
			push(n);
		}
		else if (!strcmp(order, "top")) {
			top();
		}
		else if (!strcmp(order, "size")) {
			size();
		}
		else if (!strcmp(order, "empty")) {
			empty();
		}
		else {
			pop();
		}
	}
	return 0;
}
