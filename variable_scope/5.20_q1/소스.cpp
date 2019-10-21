# include <stdio.h>
# pragma warning (disable : 4996)

int main() {
	char str[100];
	int a = 0;
	int caca = 0;

	printf("영단어 입력: ");
	scanf("%s", str);

	while (str[a] != '\0') {
		if (caca <= str[a]) {
			caca = str[a];
		}
		a++;
	}
	if (caca <= str[a])
		printf("%c", str[a]);
	else
		printf("%c", caca);
}