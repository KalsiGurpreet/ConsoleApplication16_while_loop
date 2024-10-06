#include<stdio.h>
int main(void)
{
	int max = -999999999;
	int a = 0;

	puts("Please enter the value.");
	scanf_s("%d", &a);

	while (a != -1)
	{
		if (a > max)
		{
			max = a;
			scanf_s("%d", &a);
		}
		else
		{
			scanf_s("%d", &a);
		}
	}
	printf("The largest of number is %d\n", max);
	return 0;
}