# include <stdio.h>
# pragma warning (disable : 4996)

int main(void) {
	char str[100];
	int idx = 0;

	printf("영단어를 입력하세요: ");
	scanf("%s", &str);

	while (str[idx] != '\0') {
		idx++;
	}
	printf("%d", idx);
	return 0;
}
