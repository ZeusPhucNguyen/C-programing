#include <stdio.h>
int main()
{
    int ary[10],i, max, min, demmax, demmin;
    float total=0;
	float tbt;
            
            printf("nhap cac phan tu : ");
    for(i=0; i<10;i++)
        
    {
        printf("a[%d]",i);
        scanf ( "%d", & ary[i]);
        }
 
  
        {
            min= ary[0];
            max=ary[0];
            }
    
    for (i=1;i<10;i++)
    {
            if  (ary[i] > max ) max = ary[i];
                
            if (ary[i] < min )  min = ary[i];
	}
        demmax=0;
        demmin=0;
   
    for(i=0;i<10;i++)
        {
   
    if (ary[i]==max)
        {
            demmax++;
            }
    if (ary[i]==min)
        {
            demmin++;
            }
    }
    
    for (i=0;i<10;i++)
        {
            total+=ary[i];
            tbt = total/10;
        }
     	
            printf("max=%d: so lan xuat hien la: %d\n", max,demmax);
            printf("min=%d: so lan xuat hien la: %d", min, demmin);
            printf("\nTong cac phan tu la : %f", total);
			printf("\n Trung binh tong la : %f",tbt);
}
