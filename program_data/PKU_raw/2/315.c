void main()
{
	char a[1000][100];
	int b[1000],c[27],s[1000],max,i,j,k;
	int n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d %s",&b[i],a[i]);
		s[i]=strlen(a[i]);
	}
	for (j=0;j<26;j++)
	{
		c[j]=0;
		for (i=0;i<n;i++)
		{
			for (k=0;k<s[i];k++)
			{
				if (a[i][k]==65+j)
					c[j]=c[j]+1;
			}
		}
	}
	max=0;
	for (i=0;i<26;i++)
	{
		if (c[i]>max)
			max=c[i];
	}
	for (i=0;i<26;i++)
	{
		if (c[i]==max)
		{
			printf("%c\n",i+65);
			printf("%d\n",c[i]);
			for (k=0;k<n;k++)
			{
				for (j=0;j<s[k];j++)
				{
					if (a[k][j]==65+i)
						printf("%d\n",b[k]);
				}
			}
		}
	}

}