#include<stdio.h>
int main()
{
	int number;
	printf("number:");
	scanf("%d", &number);
	if(number%8==0)
	{
		printf("%d is divisible by 8",number);
	}
	else
	{
		printf("%d is not divisible by 8",number);
	}
	return 0;
}
			
	

