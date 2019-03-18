#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int n[100],i=0,a;
	char ch;
	printf("Enter the binary number :");
	while(ch!='\n')
	{
		scanf("%c",&ch);
		
		if(ch == '1')
		ch = '0';
		
		else if(ch == '0')
		ch = '1';
		
		else if(ch == '\n')
		continue; 
		
		else
		{
			printf("Enter only zeros and ones");
			exit(1);
		}
		
		n[i] = ch;
		i++;
	}
	for(a=0;a<i;a++)
	{
		printf("%c",n[a]);
	}
}
