void main()
{
	char s[100][21];
	int n;
	int i,j;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}

	for(i=0;i<n;i++)
	{
		if(s[i][0]!='_'&&(s[i][0]<'A'||(s[i][0]>'Z'&&s[i][0]<'a')||s[i][0]>'z'))
			printf("no\n");
		else 
			for(j=1;j<strlen(s[i]);j++)
			{
				if(s[i][j]!='_'&&(s[i][j]<'0'||(s[i][j]>'9'&&s[i][j]<'A')||(s[i][j]>'Z'&&s[i][j]<'a')||s[i][j]>'z'))
				{
					printf("no\n");
					break;
				}
			}

			if(j==strlen(s[i]))
					printf("yes\n");
	}
}