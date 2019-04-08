void main()
{
	int i,n;
	scanf("%d",&n);
	char s[100][100];
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		int k=strlen(s[i]),j;
		if(s[i][k-1]=='r'&&s[i][k-2]=='e')
		{
			for(j=0;j<k-2;j++)
			{
				printf("%c",s[i][j]);
			}
		}
	    else if(s[i][k-1]=='y'&&s[i][k-2]=='l')
		{
			for(j=0;j<k-2;j++)
			{
				printf("%c",s[i][j]);
			}
		}
		else if(s[i][k-1]=='g'&&s[i][k-2]=='n'&&s[i][k-3]=='i')
		{
			for(j=0;j<k-3;j++)
			{
				printf("%c",s[i][j]);
			}
		}
		else printf("%s",s[i]);
		printf("\n");
	}
}
