#include <stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,i;
	
	printf ("Nhap so thu nhat:");
	scanf("%d",&num1);
	printf("Nhap so thu hai:");
	scanf("%d",&num2);
	
	if (num1 < num2)
	{
		for (i>=num1;i <=num2;i++)
		if (i%50 == 0)
		{printf(" %d \t",i);}
	}
	else
	{
		for (i>=num2;i<=num1;i++)
		if (i%50 ==0)
		{printf(" %d \t",i);}
	}
}
