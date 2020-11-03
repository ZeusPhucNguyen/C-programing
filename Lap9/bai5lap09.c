#include <stdio.h>
#include <conio.h>
void main()
{
	int i,j;
	int mon[4][6];
	float sum[6];
	
	
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("nhap vao diem [%d][%d]: ",i,j);
			scanf("%d",&mon[i][j]);
		}
		printf("\n");
	}
	
		for(i=1;i<=6;i++)
	{
		for(j=1;j<=4;j++)
		{
		printf("Hoc sinh [%d][%d] la %d \n",i,j,mon[i][j]);
		sum[i] += mon[i][j];
		}
		    printf("diem tong :%.1f\n",sum[i]);
			printf("diem trung binh %d = %.2f",i, sum[i]/4);
			printf("\n");			
	}
}
