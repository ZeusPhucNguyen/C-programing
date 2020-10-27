#include <stdio.h>
void main()
{
	int x,y,z;
	printf("Nhap so x:",x);
	scanf("%d",&x);
	printf("Nhap so y:",y);
	scanf("%d",&y);
	printf("Nhap so z:",z);
	scanf("%d",&z);
	
	if (x > y && x>z)
		printf("Gia tri lon nhat la: %d",x);
	if (y>z && y>x)
		printf("Gia tri lon nhat la:%d",y);
	if (z>x && z>y)
		printf("Gia tri lon nhat la:%d",z);
		
	return 0;		
}
