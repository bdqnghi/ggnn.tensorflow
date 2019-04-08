int main()
{
	char str[300][100];
	int i, l, n;
	for (i = 0;;i++)
	{
		scanf("%s",str[i]);
		if (str[i][0] == '\0')
			break;
		l = strlen(str[i]);
		if (i == 0)
		{
			printf("%s",str[i]);
		}
		else printf(" %s",str[i]);
	}
	
	return 0;
}