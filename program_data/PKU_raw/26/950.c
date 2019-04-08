int main()
{
	char a[100];
	int i, j, len, num = 0;
	gets(a);
	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		while (a[i] == ' ')
		{
			num++;
			i++;
			if (a[i] != ' ')
			{
				for (j = i; j < len; j++)
				{
					a[j - num + 1] = a[j];
				}
				len = len - num + 1;
				a[len] = '\0';
				i = i - num + 1;
				num = 0;
			}
			
		}
	}
	for (i = 0; i < len; i++)
		cout << a[i];
	return 0;
}