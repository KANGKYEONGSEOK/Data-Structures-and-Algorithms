// �ڷᱸ�� �� �˰���
//21-1 ����(10773)

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
	scanf("%d", &n); //n�Է¹���

	// ���ÿ� �Է�(push)�� ���(pop)�۾� ����
	for (i = 0; i < n; i++) {
		scanf("%d", &input); //�Է¹���

	if (input == 0) {

	pop(); // 0�̸� �����
	}
	else
	push(input); // 0�� �ƴϸ� ���ÿ� �״´�.
	}

	//printf("%d\n", size);

	// ���� �� �ձ��ϱ�
	for (i = 0; i <= top; i++) {
	res += stack[i];
	}

	printf("%d", res); // ����� ���

	return 0;

}

