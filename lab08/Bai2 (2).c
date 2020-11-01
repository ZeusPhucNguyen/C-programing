#include <stdio.h>
#include <string.h>
void main()
{
	char name[150],ans,ten[150];
	int count,i,j,n,len;
	
	printf("What's your name ?",name);
	scanf("%s",&name);
	

		for ( count=1;count <= 1000;count ++)
		printf("\n fall in love day %d",count);
		
		do
		{
			printf("Do you love me ?  Y/N \n");
			scanf("%s",&ans);		
		}while ( ans != 'Y');
		printf("Chao mung em tro thanh noc nha cua anh <3 <3 <3 \n ");

	printf("Enter your name:");
	fflush(stdin);
	gets(ten);
		
		
		printf("Enter a value of n:");
		scanf("%d",&n);
		
		len = strlen(ten);
		
		
		// Print upper part of the heart shape
		for ( i=n/2; i <= n; i+=2)
		{
			for ( j=1; j < n-i; j += 2)
			{
				printf(" ");
			}
			
			
		for (j=1;j <= i; j++)
		{
			printf("*");
			}	
			
		for (j=1; j <= n-i;j++)
		{
			printf(" ");
			}	
			
		for (j=1;j <=i;j++)
		{
			printf("*");
			}	
			
			printf("\n");
		}
		
		// Print lower triangular part of the pattern
		for ( i=n; i >= 1; i--)
		{
			for ( j=i; j<n; j++)
			{
				printf(" ");
				
			}
			//Print the name
			if ( i == n)
			{
				for (j = 1; j <= ( n*2 - len)/2; j++)
				{
					printf("*");
				}
				
				printf("%s",ten);
				
				for (j =1; j < (n*2-len)/2;j++)
				{
					printf("*");
				}
				
			}
			else 
			{
				for ( j=1;j <= (i*2)-1;j++)
			{
				printf("*");
			}
			
			}
			printf("\n");
		}
		return 0;
}
