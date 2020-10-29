#include<stdio.h>  
#include<conio.h>  

int main()  
{  
 int n1=0,n2=1,n3,i,num;  
  
 printf("Ban hay nhap so phan tu trong day Fibonacci: ");  
 scanf("%d",&num);  
 printf("\n%d %d",n1,n2);  
  
 for(i=2;i<num;++i)    
 {  
  n3=n1+n2;  
  printf(" %d",n3);  
  n1=n2;  
  n2=n3;  
 }  
 
 printf("\n\n===========================\n");
getch();  
}  
