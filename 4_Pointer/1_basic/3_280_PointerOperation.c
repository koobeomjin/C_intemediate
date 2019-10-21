#include <stdio.h>

void main(){
	int num1=100, num2=100;
	int *pnum;
	
	pnum = &num1;
	(*pnum) += 30; 		// () <= 강조하기 위한 괄호사용
						// pnum = pnum + 30 <= 주소값을 30 더하는 것
	pnum = &num2;		// *pnum += 30 <= pnum 주소의 값에 30을 더하는 것
	(*pnum) -= 30;

	printf("num1: %d, num2: %d\n", num1, num2);
}
