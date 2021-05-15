// �ڷᱸ�� �� �˰���
//21-1 ��ȣ(9012)
#include <stdio.h>
#include <string.h>
#define MAX_STACK_SIZE 52

typedef struct
{
	char data[MAX_STACK_SIZE];
	int top;
}StackType;

//�����ʱ�ȭ
void init_stack(StackType* s)
{
	s->top = -1;
}

//������� ���� �Լ�
int is_empty(StackType* s)
{
	return (s->top == -1);
}

// ��ȭ ���� ���� �Լ�
int is_full(StackType* s)
{
	return (s->top == MAX_STACK_SIZE - 1);
}


// �����Լ�
void push(StackType* s, char item)
{
	if (is_full(s)) {
		return;
	}
	else s->data[++s->top] = item;
}


// �����Լ�
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
	int	flag = 1; //��ȣ ¦ �Ǵܰ� ���� ���� if) �ȸ´� ��� 0���� �ٲ�

	scanf("%d", &n);
	getchar(); // ���ۺ��� 

	for (i = 0; i < n; i++)
	{
		fgets(text, sizeof(text), stdin); // ���๮�ڱ��� ���Ե�. fgets�� ����� ����: get�� �޸��� ħ������ ���α׷��� ������ �߻��� ��Ų��. �ǵ����̸� �޸��� �ּҸ� �������ִ� fget���
		 

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
			printf("NO\n"); // flag==0 => ��ȣ�� ¦�� �ȸ��� => no���
		else
			printf("YES\n");

		flag = 1; //flag�� �ʱ�ȭ, ���� 0���� �ٲ��µ� �ʱ�ȭ �����ָ� �����۵��� �ȵ�.
		s.top = -1; // top�ʱ�ȭ, ���� �׸��۾��� �����ϱ� ���ؼ� top�� �ʱ���  -1�� �� �ʱ�ȭ


	}

	return 0;
}

