#include<stdio.h>
main()
{
	char hello[20],ch;
	int i,a;
	printf("Enter the password :");
	for(i=0;ch != '\n';i++)
	{
		ch = getch();	//use getch instead of scanf because it takes only 1 input value
		hello[i] = ch;
		if(ch==13)		//ascii value of 13 is carraige return (normally called as enter key in laptop keyboard)
		break;
		else
		printf("*");
	}
	hello[i] = '\0';
	printf("\n\nThe entered password is %s", hello);
}

