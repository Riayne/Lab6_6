#include <stdio.h>

int main()
{
    int num= -1,sum=0;
	while (num != 0)
	{
		printf("Enter a number(if you want to end enter 0): ");
		scanf("%d",&num);
		if (num != 0)
		{
			sum =sum+num;
			printf("The sum is now %d\n", sum);
		}
	
	}
	printf("program ended");
	
}