#include <stdio.h>
void main()
{
	int a, b;
	printf("Nhap so a: \n",a);
	scanf("%d",&a);
	printf("Nhap so b: \n",b);
	scanf("%d",&b);

	if (a - b == a || a - b == b )
		printf("Hieu bang gia tri <gia tri so da nhap vao>");
	else 
		printf("Hieu khong bang bat cu gia tri nao da duoc nhap");
	
}
