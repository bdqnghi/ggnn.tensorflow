void main()
{
	char book[1000][30];
	int n,i,j,k,r,len[1000],a[26][1000]={0},b[26]={0},max,s,c[26];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(book[i]);
		scanf("\n");
	}
	for(i=0;i<=n;i++)
		for(j=0;book[i][j]!=' ';j++)
			len[i]=j;
	for(k=0;k<26;k++)
	{
		r=0;
		for(i=0;i<=n;i++)
		{
			for(j=len[i]+1;j<strlen(book[i]);j++)
			{
				if(book[i][j]==k+65)
				{
					b[k]++;
					a[k][r]=i;
					r++;
				}
			}
		}
		c[k]=r;
	}
	max=b[0];
	for(i=1;i<26;i++)
	{
		if(b[i]>=max)
		{
			max=b[i];
			s=i;
		}
	}
	printf("%c\n",s+65);
	printf("%d\n",max);
	for(i=0;i<c[s];i++)
	{
		for(j=0;j<=len[a[s][i]];j++)
			printf("%c",book[a[s][i]][j]);
		printf("\n");
	}
}




