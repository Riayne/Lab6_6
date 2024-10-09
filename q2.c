#include <stdio.h>

int main()
{ 
    int num= -1;

	while (num != 0)
	{
		printf("Enter a number(if you want to end enter 0): ");
		scanf("%d",&num);
		if (num != 0)
		{
			if (num>=10 || num<=-10)
			{
				printf("This number is a multiple digit number\n");
			}
			else
			{
			printf("this number is a single digit number\n");
			}
			
			
	    }
	    
	
	}
	printf("program ended");
}