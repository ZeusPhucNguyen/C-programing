#include <stdio.h>
#include <string.h>
	int num,chuyen,id,ans,ok;
	int sodu = 5000;
	char traloi ;
void main()
{
	int username,password;

			printf("Moi ban nhap username:");
			scanf("%d",&username);
			printf("Moi ban nhap password:");
			scanf("%d",&password);
			
			ok = login(username,password);
			if (ok == 1)
		{
			do 
	{	menu(ans);
	scanf("%d",&ans);
		switch (ans)
		{
			case 1:
				printf("Nhap so tien ban muon rut:");
				scanf("%d",&num);
				withdraw(num);
				break;
			
			case 2:
				printf("Nhap id cua nguoi nhan tien:");
				scanf("%d",&id);
				printf("Nhap so tien ban can chuyen:");
				scanf("%d",&chuyen);
				transfer(id,chuyen);
				break;
			case 3:
				hienthisodu(sodu);
				break;
			case 4:
				printf("Cam on vi su dung dich vu");
				exit(0);
				break;		
		}
		fflush(stdin);
		printf("Ban co muon tiep tuc chuong trinh khong?Y/N");
		scanf("%c",&traloi);
	} while (traloi == 'y');
	printf("Cam on quy khach su dung dich vu cua chung toi");
}
else 
{
	printf("....");
}
	
}

login(int username,int password)
{	int ans;

	if( username == 8888 && password == 8888)
	{
		printf("Dang nhap thanh cong !!!");

		return 1;
	}
	else 
	{
		printf("Dang nhap khong thanh cong, moi ban kiem tra lai username hoac password");
		return 0;
	}
}

menu(int ans)
{
	int num;
	
	printf("\nMenu cua FPT Bank,moi ban chon:\n");
	printf("1,Rut tien\n");
	printf("2,Chuyen tien\n");
	printf("3,Kiem tra so du\n");
	printf("4,Exit\n");
	
}

withdraw(int num)
{
	if (num <3000 && num%50==0 && num<= sodu)
	{	sodu= sodu - num;
		printf("Rut tien thanh cong,ban da rut ra %d",num);
	}		
	else 
	{
		printf("Dieu kien rut tien khong thoa man, moi ban xem lai");
	}
}
transfer(int id,int chuyen)
{
	sodu = sodu - chuyen;
	printf("Ban da chuyen thanh cong so tien la %d vao tai khoan %d",chuyen,id);
}

hienthisodu(int sodu)
{
	printf("So du hien tai cua ban la %d",sodu);
}
