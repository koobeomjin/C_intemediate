# include <stdio.h>
# pragma warning (disable : 4996)

int main() {
	int arr[5], i;
	int max, min, sum;

	for (i = 0; i < 5; i++) {
		printf("\n정수를 입력하세요: \n\n");
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
	printf("\n입력한 정수들 중 최솟값: %d\n", min);
	printf("\n입력한 정수들 중 최댓값: %d\n", max);
	printf("\n입력한 정수들의 합: %d\n", sum);
}