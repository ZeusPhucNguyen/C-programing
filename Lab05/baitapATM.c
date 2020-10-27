#include <stdio.h>
void main ()
{
	printf("Chao mung khach hang den voi ZeusBank");
	int mathe ;
	int mapin ;
	printf ("Nhap ma the :");
	scanf ("%d",&mathe);
	char o;
	if (mathe == 1234)	
	{
	printf ("Nhap ma pin");
	scanf ("%d",&mapin);
	if (mapin == 1111)
	{
		int x ;
		printf ("Enter Choice (1-4): \n 1,Rut tien \n 2,Kiem tra so du \n 3,Exit \n 4,Chuyen khoan \n");
		scanf ("%d",&x);
			int sodu=500;
			int sotienrut;
		if (x == 1)
			{   printf("Choice is 1,Rut tien \n");
				printf("So tien ban can rut la:",sotienrut);
				scanf("%d",&sotienrut);
				if (sotienrut % 50 ==0 && sotienrut <= 500)
				{
					char ans = 'y';
					printf ("Giao dich nay can mat phi, ban co muon tiep tuc ? (Y/N)");
					fflush(stdin);
					scanf("%c",&ans);
					if (ans == 'y')
					{
						printf("So du con lai la : %d",sodu = sodu -sotienrut-5);
					}
					else 
						printf("Giao dich ket thuc");
				}
				else
				printf(" So tien can rut la boi so cua 50 va nho hon 500");
			}
		
		else if ( x ==2)
		{
			printf (" Choice is 2,Kiem tra so du \n");
			fflush(stdin);
			printf("So du hien tai la:%d",sodu);
		}
		
		else if (x ==3)
		{
			printf("Choice is 3,Exit \n");
			fflush(stdin);
			char o;
			printf("Neu muon thoat, bam phim O:");
			scanf("%c", &o);
			if (o == 'O')
			printf("Giao dich ket thuc");
		}
		
		
		else if ( x ==4)
		{
			printf ("Choice is 4,Chuyen khoan \n");
			int stkchuyen;
			int num;
			int sodustkchuyen=800;
			printf("Nhap so tai khoan chuyen:");
			scanf("%d",&stkchuyen);
			if (stkchuyen == 8888)
			{ printf ("Nhap so tien can chuyen:");
			scanf("%d",&num);
			printf("So du hien tai cua stk chuyen : %d\n",sodustkchuyen = sodustkchuyen + num);
			printf("So du hien tai cua ban la : %d \n",sodu= sodu - num);
			}
			else 
			printf(" So tai khoan khong hop le");
		}
	}
	else
	printf ("Ma pin cua ban khong hop le");
}
	else 
	printf("Ma the cua ban khong hop le");
	
}
