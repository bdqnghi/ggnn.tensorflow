int main()
{
	char ch;
	int len = 0;
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ' && len)
		{
			printf("%d", len);
			len = 0;
			break;
		}
		else if(ch != ' ')
			len++;
	}
	if(ch == '\n')
	{
		printf("%d\n", len);
		return 0;
	}
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ' && len)
		{
			printf(",%d", len);
			len = 0;
		}
		else if(ch != ' ')
			len++;
	}
	if(len) printf(",%d\n", len);
	else printf("\n");
	return 0;
}