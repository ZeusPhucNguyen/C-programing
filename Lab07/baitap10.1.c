#include <stdio.h>
#include <conio.h>
void main()
{
	char name[100];
	int age,i;
	
	printf("What your name: ",name);
	gets (name);
	printf("How old are you:",age);
	scanf("%d",&age);
	 for ( i=0 ; i < age; i++ )
	 {
	 	printf(" Hello %s  time %d \n",name,i+1);
	 }
}
