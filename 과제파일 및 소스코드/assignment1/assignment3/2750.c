
// ���� �� ����(bouble sort) ����Ͽ� �� �������� ���� 
// 2750
// ���漮 �ۼ�

#include<stdio.h>
int main(void) {
	int arr[1000];
	int n, i, j, temp;
	
	// �Է�. 
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	// �˻�.
	for(i=0; i<n; i++) { 
		for(j=0; j<n-i-1; j++) {
				if(arr[j] > arr[j+1]) {
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
		}
	}
	
	for(i=0; i<n; i++) {
		printf("%d\n", arr[i]);	
	}
	
	return 0;
}
