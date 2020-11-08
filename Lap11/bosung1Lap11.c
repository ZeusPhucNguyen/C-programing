#include <stdio.h>
float  cd,cr,cv,dt;
float s(float cd,float cr);
float p(float cd,float cr);

main()
{
	
	int menu;
	
	printf("Nhap chieu dai:");
	scanf("%f",&cd);
	printf("Nhap chieu rong:");
	scanf("%f",&cr);
	printf("Menu\n 1,Dien tich\n 2,Chu vi\n");
	scanf("%d",&menu);
	
	switch (menu)
	{
		case 1:
			dt = s(cd,cr);
			printf("Dien tich=%f",dt);
			break;
		
		case 2:
			cv = p(cd,cr);
			printf("Chu vi=%f",cv);
			break;	
	}
}

float s(float cd,float cr)
{
	float dt = cd*cr;
	return dt;
}

float p(float cd,float cr)
{
	float cv = (cd + cr)*2;
	return cv;
}

