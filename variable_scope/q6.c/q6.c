#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_sec = 0;
	int second = 0;
	int minute = 0;
	int hour = 0;

	printf("초(sec)를 입력하세요: ");
	scanf("%d", &input_sec);

	if (input_sec > 60) {
		second = input_sec % 60;
		if (second > 60)
		minute = second % 60;
			if (minute > 60)
			hour = minute % 60;
			hour++;
	}

	printf("[ h : %d, m : %d, s : %d ]\n", hour, minute, second);
}