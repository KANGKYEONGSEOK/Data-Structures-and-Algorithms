// 자료구조 및 알고리즘
//21-1 괄호(9012)
#include <stdio.h>
#include <string.h>
#define MAX_STACK_SIZE 52

typedef struct
{
	char data[MAX_STACK_SIZE];
	int top;
}StackType;

//스택초기화
void init_stack(StackType* s)
{
	s->top = -1;
}

//공백상테 검출 함수
int is_empty(StackType* s)
{
	return (s->top == -1);
}

// 포화 상태 검출 함수
int is_full(StackType* s)
{
	return (s->top == MAX_STACK_SIZE - 1);
}


// 삽입함수
void push(StackType* s, char item)
{
	if (is_full(s)) {
		return;
	}
	else s->data[++s->top] = item;
}


// 삭제함수
char pop(StackType* s)
{
	if (is_empty(s)) {
		return 1;
	}
	else return s->data[s->top--];
}


int main()
{
	StackType s;
	init_stack(&s);

	char text[MAX_STACK_SIZE], item;
	int i, j, n;
	int	flag = 1; //괄호 짝 판단값 저장 변수 if) 안맞는 경우 0으로 바뀜

	scanf("%d", &n);
	getchar(); // 버퍼비우기 

	for (i = 0; i < n; i++)
	{
		fgets(text, sizeof(text), stdin); // 개행문자까지 포함됨. fgets를 사용한 이유: get은 메모리의 침범으로 프로그램에 오류를 발생을 시킨다. 되도록이면 메모리의 주소를 지정해주는 fget사용
		 

		for (j = 0; j < strlen(text) - 1; j++)
		{
			if (text[j] == '(') {
				push(&s, text[j]);
			}
			else if (text[j] == ')') {
				item = pop(&s);

				if (item != '(') {
					flag = 0;
					break;
				}
			}
		}

		if (s.top != -1)
			flag = 0;
		//printf("%d\n", flag);

		if (flag == 0)
			printf("NO\n"); // flag==0 => 괄호의 짝이 안맞음 => no출력
		else
			printf("YES\n");

		flag = 1; //flag재 초기화, 만약 0으로 바꼈는데 초기화 안해주면 정상작동이 안됨.
		s.top = -1; // top초기화, 다음 항목작업을 수행하기 위해서 top을 초기의  -1로 재 초기화


	}

	return 0;
}

