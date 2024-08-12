#include<stdio.h>

int main() 
{
	int num, sum, count, result;
	int arr[100000] = { 0 };

	while (1)
	{
		sum = 0, count = 0, result = 0;

		scanf("%d", &num);
		
		if (num == -1)
			break;

		for (int i = 1; i < num; i++)
			if (num % i == 0)
			{
				sum += i;
				arr[count] = i;
				count += 1;
			}

		if (num == sum)
		{
			printf("%d = %d", num, arr[0]);
			for (int j = 1; j < count; j++)
				printf(" + %d", arr[j]);
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n", num);
	}
	return 0;
}