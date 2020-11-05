#include <stdio.h>
void main()
{
	int a,b,c;

	printf("\n Nhap do dai  canh a cua tam giac:");
	scanf("%d",&a);
	printf("\n Nhap do dai canh b cua tam giac:");
	scanf("%d",&b);
	printf("\n Nhap do dai canh c cua tam giac:");
	scanf("%d",&c);
	
	GetArea(a,b,c);	
}

void GetArea(int a, int b,int c)
{
	float p,s;
	p= (a+b+c)/2;
	
	if (a+b>c && a+c>b && b+c>a)
	{
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Vay dien tich cua tam giac la %f",s);
	}
	else
	{
		printf("Do dai 3 canh khong phai la cua 1 tam giac");
	}
}
