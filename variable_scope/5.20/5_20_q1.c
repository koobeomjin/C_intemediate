# include <stdio.h>
# pragma warning (disable : 4996)

int main() {
	int arr[5], i;
	int max, min, sum;

	for (i = 0; i < 5; i++) {
		printf("\n������ �Է��ϼ���: \n\n");
		scanf("%d", &arr[i]);
	}

	max = min = sum = arr[0];

	for (i = 0; i < 5; i++) {
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("\n�Է��� ������ �� �ּڰ�: %d\n", min);
	printf("\n�Է��� ������ �� �ִ�: %d\n", max);
	printf("\n�Է��� �������� ��: %d\n", sum);
}