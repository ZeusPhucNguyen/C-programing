#include<stdio.h>
void main()
{
		int x;
	char i,ans ;
	i=' ';
	
	do{
		x = 0;
	ans = 'y';
	printf("\n Enter sequence of character:");
	
	  do{
	  	i = getchar();
	  	x++ ;
	  }	while (i != '\n');
	  i= ' ';
	  printf("\n Number of characters entered is: %d",--x);
	  printf("\n More sequences (Y\N)?");
	  ans = getch();
	}	while (ans == 'Y' || ans == 'y');
}
