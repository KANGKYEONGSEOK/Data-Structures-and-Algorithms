#include <stdio.h>
#include <string.h> //strcmp �Լ��� ����� �������

int stack[1000001]; // Ƚ�� 1000001(��)�� ����
int cnt = 0;        // ���û����� ����

void push(int n) {   // stack�� ���� �� �Է�(�Է½ø��� ����)
	stack[cnt] = n;
	cnt++;
}

void pop() {         // stack[cnt] - ���� �ֱٰ�; printf����� stack[cnt]�� 0�� �־� �ʱ�ȭ
	if (cnt != 0) {
		cnt--;
		printf("%d\n", stack[cnt]);
		stack[cnt] = 0;
	}
	else {
		printf("%d\n", -1);  // ���̻� ���� ������ ������ -1 ���
	}
}

void size() {
	printf("%d\n", cnt);  // ���ÿ� ����� ���� ���� ���
}

void empty() {
	if (cnt != 0) {
		printf("0\n");   // ���ÿ� ����� ���� ������ 0 ���
	}
	else {
		printf("1\n");    // ���ÿ� ����� ���� ������ -1 ���
	}
}

void top() {
	if (cnt != 0) {
		printf("%d\n", stack[cnt - 1]);
	}
	else {
		printf("%d\n", -1);	// ���ÿ� ����� ���� ������ -1 ���
	}
}





int main()
{
	int stack_size; 			//���� ���ü� 
	scanf("%d", &stack_size);
	char order[100]; 		// �Է� ����ũ�� �ִ� 100���ڷ� ����

	for (int i = 0; i < stack_size; i++) {
		scanf("%s", &order);  // ��ɾ� �Է�
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
