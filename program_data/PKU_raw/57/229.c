void main()
{
	int n,i,j,a[51]={0};
	char s[51][51],str[10];
	scanf("%d",&n);

	for(i=0;i<n+1;i++)
	{
		gets(s[i]);
		a[i]=strlen(s[i]);
	}
	for(i=1;i<n+1;i++)
	{
		if (s[i][a[i]-1]=='r')
		{
			for (j=0;j<a[i]-2;j++)
				printf("%c",s[i][j]);
		}
		else if (s[i][a[i]-1]=='y')
		{
			for (j=0;j<a[i]-2;j++)
				printf("%c",s[i][j]);
		}
		else if (s[i][a[i]-1]=='g')
		{
			for (j=0;j<a[i]-3;j++)
				printf("%c",s[i][j]);
		}
		printf("\n");
	}

}