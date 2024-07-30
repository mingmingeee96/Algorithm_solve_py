#include <stdio.h>
#include <string.h>

int main()
{
	char n[16] = { 0 };
	int sum = 0;
	scanf("%s", n);
	int len = strlen(n);

	for (int i = 0; i < len; i++)
	{
		if (n[i] == 'A' || n[i] == 'B' || n[i] == 'C')
			n[i] = 2;
		else if (n[i] == 'D' || n[i] == 'E' || n[i] == 'F')
			n[i] = 3;
		else if (n[i] == 'G' || n[i] == 'H' || n[i] == 'I')
			n[i] = 4;
		else if (n[i] == 'J' || n[i] == 'K' || n[i] == 'L')
			n[i] = 5;
		else if (n[i] == 'M' || n[i] == 'N' || n[i] == 'O')
			n[i] = 6;
		else if (n[i] == 'P' || n[i] == 'Q' || n[i] == 'R' || n[i] == 'S')
			n[i] = 7;
		else if (n[i] == 'T' || n[i] == 'U' || n[i] == 'V')
			n[i] = 8;
		else if (n[i] == 'W' || n[i] == 'X' || n[i] == 'Y' || n[i] == 'Z')
			n[i] = 9;
	}
	for (int i = 0; i < len; i++)
		sum += n[i] + 1;
	
	printf("%d", sum);
	return 0;
}