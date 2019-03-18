#include<stdio.h>
#include <stdlib.h>
#include<math.h>
main()
{
	int n, i;
	printf("Enter the number to check for prime number :");
	scanf_s("%d", &n);
	while (n < 2 ) {
		if (n < 2)
		{
			printf("The number must be greater than 1,please try type it again: ");
			scanf_s("%d", &n);
		}
		
	}
		for (i = 2; i < n; i++)
		{
			if (n%i == 0)
			{
				printf("Not a prime number");
				break;
			}
			else
			{
				if (n % (i + 1) == 0)
					printf("Is a prime number");
			}
		}
	
}
