/* accept only int value */
#include <stdio.h>
void main()
{
	int num1 , num2 ;
	num2 = 0;
	do{
		printf("\n Enter a number:");
		scanf("%d",&num1);
		printf("No. is %d",num1);
		num2++ ;
	}
	while (num1 != 0);
	printf("\n The total numbers entered were %d",--num2);
			/* num2 is decremented before printinf because count for last integer (0) is not to be considered */
}
