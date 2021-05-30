
// 백준 수 정렬(bouble sort) 사용하여 수 오름차순 정렬 
// 2750
// 강경석 작성

#include<stdio.h>
int main(void) {
	int arr[1000];
	int n, i, j, temp;
	
	// 입력. 
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	// 검사.
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
