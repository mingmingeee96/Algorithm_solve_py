#include<stdio.h>

int main() 
{
	int num1, num2;
	int count = 0;
	int div[10000] = { 0 };
	scanf("%d %d", &num1, &num2);

	for (int i = 1; i <= num1; i++)
	{
		if (num1 % i == 0)
		{
			count += 1;
			div[count] = i;
		}
	}
	printf("%d", div[num2]);

	return 0;
}