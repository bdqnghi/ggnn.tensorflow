
int main()
{
	int a, b;
	char num[100], t[100];
	scanf("%d%s%d", &a, num, &b);
	long shi = 0;
	int i;
	for(i = 0; num[i] != '\0'; i++)
	{
		if(num[i] >= '0' && num[i] <= '9')
		{
			shi = shi * a + num[i] - '0';
		}
		if(num[i] >= 'a' && num[i] <= 'z')
		{
			shi = shi * a + num[i] - 'a' + 10;
		}
		if(num[i] >= 'A' && num[i] <= 'Z')
		{
			shi = shi * a + num[i] - 'A' + 10;
		}
	}
	for(i = 0; shi != 0; i++)
	{
		if((shi % b) <= 9)
		{
			t[i] = (shi % b) + '0';
		}
		else
		{
			t[i] = (shi % b) - 10 + 'A';
		}
		shi = shi / b;
	}

	int j;
	for(j = i - 1; j >= 0; j--)
	{
		printf("%c", t[j]);
	}
	printf("\n");

	return 0;
}