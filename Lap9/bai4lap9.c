#include <stdio.h>

int main()
 {
    char  student[5][150];
    int i;
    printf("Nhap t�n hoc sinh v�o bang danh sach sau:\n");
    
    for (i=0; i<5; i++)
	 {
        printf("\nT�n hoc sinh so  %d l�:", i+1);
    	scanf("%s",student[i]);
    }
    for (i=0; i<5; i++) {
        printf("\n Hoc sinh so %d l� %s", i+1, student[i]);
    }

    printf("\n");
}
