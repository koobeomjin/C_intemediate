#include <stdio.h>

void main(){
	int i,j,k;
	int arr[4][3][2];
	int total=0;

	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			for(k=0; k<2; k++){
			printf("���ڸ� �Է��ϼ���: ");
			scanf("%d", &arr[i][j][k]);
			}
		}
	}
	
	for(i=0; i<4; i++)
		for(j=0; j<3; j++)
			for(k=0; k<2; k++)
			total += arr[k][i][j];
	printf("3����: %g ",(double)total/24);
	printf("\n");
	
}