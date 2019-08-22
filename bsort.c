#include <stdio.h>

int main()
{
	int i;
	char did_sorting, str[1000], c;

	setbuf(stdout, 0);
	scanf("%s", str);
	for(i = did_sorting = 0; 1; i++)
	{
		if(!str[i + 1] || !str[i])
		{
			if(!did_sorting) break;
			i = -1;
			did_sorting = 0;
			continue;
		}
		if(str[i] > str[i + 1])
		{
			c = str[i];
			str[i] = str[i + 1];
			str[i + 1] = c;
			did_sorting = 1;
			printf("%s\r", str);
			usleep(100000);
		}
	}
	putchar('\n');
	return 0;
}
