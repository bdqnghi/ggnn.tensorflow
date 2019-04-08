int main()
{
	char ch;
	int i = 0, j, k;
	int conuter = 0;
	int length[300] = {0};
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '\n')
		{
			length[i] = conuter;
			break;
		}
		else
		{
			if (ch == ' ')
			{
				length[i] = conuter;
				conuter = 0;
				if (length[i] != 0)
				{
					i++;
				}
			}
			else
			{
				conuter++;
			}
		}
	}
	for (j = 0; j < i; j++)
	{
		printf("%d,", length[j]);
	}
	printf("%d", length[j]);
	return 0;
}