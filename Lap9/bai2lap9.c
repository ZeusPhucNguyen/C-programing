#include <stdio.h>
void  main()
{
	int arr[5];
	float ar[10];
	int i;
	
	for (i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		ar[i] = arr[i];
	}
	
	for (i=5;i <10;i++)
	{
		ar[i] = 0;
	}
	for (i=0;i<10;i++)
	{
	printf("\n%f\t",ar[i]);
	}
	
}
