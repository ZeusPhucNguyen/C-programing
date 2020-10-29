#include <stdio.h>
#include <conio.h>
void main()
{
	int num1, num2,i,sum ;
	
	printf("Nhap so thu nhat :",num1);
	scanf("%d",&num1);
	printf("Nhap so thu hai :",num2);
	scanf("%d",&num2);
	
	if (num1 < num2)
	{for (i >=num1; i <= num2;i++ )
	if (i % 2 != 0)
	sum += i;
	printf("Tong bang: %d",sum);
	}
	
	else
	{
		for ( i<= num1; i >= num2; i++)
		if (i %2 != 0)
		sum +=i;
		printf("Tong bang: %d",sum);
	}
}
