#include <stdio.h>
void main()
{
	char ch;
	int luong ;
	
	printf("Chon loai nhan vien :",ch);
	scanf("%c",&ch);
	
	if (ch == 'A')
		printf("Muc luong cua nhan vien loai A la : %d",luong =300 + 500 );
	else if (ch == 'B')
		printf("Muc luong cua nhan vien loai B la : %d",luong = 250 + 500);
	else
		printf("Muc luong cua nhan vien loai khac la :%d",luong = 100+500);
		
	return 0;	
			
}

