#include <stdio.h>
int main()
{
	int n1, n2, sum = 0, min[1] = { 0 };
	scanf("%d %d", &n1, &n2);

	for (int i = n1; i <= n2; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i == j)
			{
				sum += j;
				if (min[0] == 0)
					min[0] = j;
			}
			if (i % j == 0)
				break;
		}
	}
	
	if (min[0] == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min[0]);

	return 0;
}