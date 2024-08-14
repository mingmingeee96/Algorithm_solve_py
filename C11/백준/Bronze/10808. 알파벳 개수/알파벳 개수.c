#include<stdio.h>
#include<string.h>

int main() 
{
	char word[100] = { 0 };
	char abc[26] = { 0 };

	scanf("%s", word);
	for (int i = 0; i < strlen(word); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if(word[i] - 'a' == j)
				abc[j]++;
		}
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", abc[i]);
	return 0;
}