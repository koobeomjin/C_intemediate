#include <stdio.h>

void main(){
	int mean=0,i,j,k;
	int record[3][3][2]={
		{
			{70,80},
			{94,90},
			{70,85}
		},
		{
			{83,90},
			{95,60},
			{90,82}
		},
		{
			{98,89},
			{99,94},
			{91,87}
		}
	};

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
			mean += record[i][j][k];
			}
		}
	printf("학급 전체 평균: %g \n", (double)mean/6);
	mean=0;
	}
}
