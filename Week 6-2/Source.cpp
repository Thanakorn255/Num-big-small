#include<stdio.h>
int main()
{
	int a, b, num;
	printf("Enter Number : ");
	scanf_s("%d", &num);
	for (a = 0;a <= num;a++)
	{
		for (b = 0;b <= num;b++)
		{
			printf("%d",num);
		}
		printf("\n");
		num -= 1;
	}
}