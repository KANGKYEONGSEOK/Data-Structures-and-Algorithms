#include <stdio.h>

int stack[100001];
int size = 0;

void push(int a) {
	stack[size++] = a;
}

int pop() {
	return stack[--size];
}

int main(void) {
	int n;
	int input;
	int res = 0;
	int i;
	scanf("%d", &n); //n�Է¹���

	// ���ÿ� �Է�(push)�� ���(pop)�۾� ����
	for (i = 0; i < n; i++) {
		scanf("%d", &input); //�Է¹���

		if (input == 0)
			pop(); // 0�̸� �����
		else
			push(input); // 0�� �ƴϸ� ���ÿ� �״´�.
	}

	//printf("%d\n", size);

	// ���� �� �ձ��ϱ�
	for (i = 0; i < size; i++) {
		res += stack[i];
	}

	printf("%d", res); // ����� ���

	return 0;
}

