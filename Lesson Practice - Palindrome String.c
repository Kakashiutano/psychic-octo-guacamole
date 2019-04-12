#include<stdio.h>
#include<string.h>
main()
{
	  char a[100], b[100];
	  printf("Enter a string :");
	  gets(a);
	
	  strcpy(b,a);
	  strrev(b);
	
  	if(strcmp(a,b)==0)
	  printf("The given string is palindrome");
	  else
	  printf("The given string isn't palinfrome");
}
