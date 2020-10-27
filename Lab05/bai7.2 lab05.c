#include <stdio.h>
void main()
{
	int a,b;
	
	printf("Nhap so a: ",a);
	scanf("%d",&a);
	printf("Nhap so b:",b);
	scanf("%d",&b);
	
	if (a * b == 1000)
		printf("Tich cua 2 so a va b bang 1000");
	else if (a * b > 1000)
		printf("Tich cua 2 so a va b lon hon 1000");
		
	return 0;
}
