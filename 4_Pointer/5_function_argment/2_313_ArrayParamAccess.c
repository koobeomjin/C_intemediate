#include <stdio.h>

// void ShowArrayElem(int* param, intlen)
void ShowArrayElem(int param[], int len) {
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
		printf("\n");
}

// void AddArrayElem(int* param, int len, int add)
void AddArray(int param[], int len, int add) {
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;
}

void main() {
	int arr[3] = { 1,2,3 };

	AddArray(arr, sizeof(arr) / sizeof(int), 1);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArray(arr, sizeof(arr) / sizeof(int), 2);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArray(arr, sizeof(arr) / sizeof(int), 3);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));
}

	
