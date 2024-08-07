#include<stdio.h>

int main() 
{
	int n1, n2, n3, n4, n5, n6, n7, n8;
	scanf("%d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8);
	if (n8 - n7 == 1 && n7 - n6 == 1 && n6 - n5 == 1 && n5 - n4 == 1 && n4 - n3 == 1 && n3 - n2 == 1 && n2 - n1 == 1)
		printf("ascending");
	else if (n1 - n2 == 1 && n2 - n3 == 1 && n3 - n4 == 1 && n4 - n5 == 1 && n5 - n6 == 1 && n6 - n7 == 1 && n7 - n8 == 1)
		printf("descending");
	else
		printf("mixed");
	return 0;
}