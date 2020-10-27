#include <stdio.h>
void main ()
{
	int a,b;
	printf ("Nhap so a\n",a);
	scanf("%d",&a);
	printf("Nhap so b\n",b);
	scanf("%d",&b);
	if(a % b == 0)
	printf("a chia het cho b");
	else
	printf("a khong chia het cho b");
	return 0;
}
