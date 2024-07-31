#include <stdio.h>

int main()
{
	int num;
	int mul=1, n[10];

	for (int i = 0; i < 10; i++)
		n[i] = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &num);
		mul *= num;
	}

	for (int i = 0; mul > 0; i++)
	{
		num = mul % 10;
		n[num] += 1;
		mul /= 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", n[i]);

	return 0;
}