/* Doi mot ky tu hoa thanh ky tu thuong */
#include<stdio.h>
void main()
{
	char c ;
	printf(" Please enter the character:");
	scanf("%c",&c);
	
	if (c >= 'A' && c <= 'Z')
	printf(" Lowercase character = %c", c+ 'a' - 'A');
	else
	printf(" Character entered is = %c",c);
}
