#include <stdio.h>
void main()
{
	int x,y;
	printf("Nhap so x: ",x);
	scanf("%d",&x);
	printf("Nhap so y:",y);
	scanf("%d",&y);
	
	if (x< 2000 || x> 3000)
		printf("x thoa man :%d \n",x);
	else
		printf("x khong thoa man\n");
	if (y> 100 && y< 500)
		printf("y thoa man :%d\n",y);
	else
		printf("y khong thoa man\n");	
	
	return 0;
}
