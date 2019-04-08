int main()
{
	int i, j, max = 0;
	char str[11], substr[4], maxx = 0;
	char zong[20];
	while (scanf("%s%s", str, substr) != EOF)
	{
		max = 0;
		maxx = 0;
		j = 0;
		for (i = 0; i <= strlen(str) - 1; i++)
		{
			if (str[i] > maxx)
			{
				max = i;
				maxx = str[i];
			}
		}
		for (i = 0; i <= max; i++)
		{
			zong[j++] = str[i];
		}
		for (i = 0; i <= 2; i++)
		{
			zong[j++] = substr[i];
		}
		for (i = max + 1; i <= strlen(str) - 1; i++)
		{
			zong[j++] = str[i];
		}
		zong[j] = '\0';
		printf("%s\n", zong);
	}
}
