void main()
{
	int n,m,i,j,c[500];
	char s[501],t[500][4];
	scanf("%d",&n);
	scanf("%s",s);
	m=strlen(s);
	for(i=0;i<=m-n;i++)
	{
		for(j=0;j<n;j++)
			t[i][j]=s[i+j];
	}
	for(i=0;i<=m-n;i++)
	{
		c[i]=1;
		for(j=i+1;j<=m-n;j++)
		{
			int u=0,w;
			for(w=0;w<n;w++)
			{
				if(t[i][w]==t[j][w])
					u=u+1;
			}
			if(u==n)
				c[i]=c[i]+1;
		}
	}
	int k=c[0];
	for(i=1;i<=m-n;i++)
	{
		if(c[i]>k)
			k=c[i];
	}
	if(k==1)
		printf("NO");
	else
	{
		printf("%d\n",k);
		for(i=0;i<=m-n;i++)
		{
			if(c[i]==k)
			{
				for(j=0;j<n;j++)
					printf("%c",t[i][j]);
				printf("\n");
			}
		}
	}
}
