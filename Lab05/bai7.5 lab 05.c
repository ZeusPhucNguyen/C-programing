#include <stdio.h>
void main()
{
	int mark;
	printf("Nhap so diem sinh vien dat duoc: ",mark);
	scanf("%d",&mark);
	fflush(stdin);
	if (mark >= 75)
		printf("Sinh vien nay dat loai A");
	 else if (mark >= 60 && mark < 75)
		printf("Sinh vien nay dat loai B");
	 else if (mark >=45 && mark <60)
		printf("Sinh vien nay dat loai C");
	 else if (mark >=35 && mark <45 )
		printf("Sinh vien nay dat loai D");
	 else if (mark < 35)
		printf("Sinh vien nay dat loai E");
					
}
