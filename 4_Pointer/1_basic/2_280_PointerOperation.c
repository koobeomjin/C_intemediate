#include <stdio.h>

void main(){
	int num1=100;
	int *pnum;
	
	pnum = &num1;

	printf("\nnum1: %d\n", num1);
	printf("*pnum: %d\n", *pnum);

	num1=200;
	printf("\nnum1: %d\n", num1);
	printf("*pnum: %d\n", *pnum);

	*pnum=300;
	printf("\nnum1: %d\n", num1);
	printf("*pnum: %d\n", *pnum);
}
