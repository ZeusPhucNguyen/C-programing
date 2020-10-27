#include <stdio.h>
void main ()
{
	char m;
	
	printf("Nhap chu cai tuong ung de hien thi ngon ngu lap trinh tuong ung:");
	scanf("%c",&m);
	
	switch(m)
	{
		case 'a': case 'A':
			printf("Ngon ngu lap trinh Ada");
		break;
		
		case 'b': case 'B':
			printf("Ngon ngu lap trinh Basic");
		break;
		
		case 'c': case 'C':
			printf("Ngon ngu lap trinh COBOL");
		break;
		
		case 'd': case 'D':
			printf("Ngon ngu lap trinh dBASE III");
		break;
		
		case 'f': case 'F':
			printf("Ngon ngu lap trinh Fortran");
		break;
		
		case 'p': case 'P':
			printf("Ngon ngu lap trinh Pascal");
		break;
		
		case 'V': case 'v':
			printf("Ngon ngu lap trinh Visual C++");
			break;
							
		default:
			printf("Ki tu nhap khong nam trong danh sach");
	}
}
