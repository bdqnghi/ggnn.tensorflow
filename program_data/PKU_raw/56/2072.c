int main()
{		
	char s[6];
	while(scanf("%s",s) != EOF)
	{
		int len = strlen(s);
		for(int i = len - 1;i >= 0;i--)
		{
			printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}