#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c ;
	
	printf("Chon so tu nhien a: ",a);
	scanf("%d",&a);
	printf("\n");
	for (b=0; b <= a; b++)
	{
		printf("\n");
		for ( c = 1; c <= b;c++)
			printf("%d",c);
	}
}
