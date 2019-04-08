main()
{
	char a[30][30];int c[30];
	int b,j,l,i,n;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%s",a[i]);
	for(i=0;i<=n-1;i++)
	{
		b=1;
		l=strlen(a[i]);
		if((a[i][0]<='z'&&a[i][0]>='a')||(a[i][0]<='Z'&&a[i][0]>='A')||(a[i][0]=='_'))
		{
		for(j=1;j<=l-1;j++)
		{
			if((a[i][j]<='z'&&a[i][j]>='a')||(a[i][j]<='Z'&&a[i][j]>='A')||(a[i][j]=='_')||((a[i][j])<='9'&&a[i][j]>='0'));
			else
				b=0;
		}
		}
		else b=0;
		if(b==0)
			c[i]=0;
		else
			c[i]=1;
	}
	for(i=0;i<=n-1;i++)
	{
		if(c[i]==1)
			printf("yes\n");
		else
			printf("no\n");
	}

}
