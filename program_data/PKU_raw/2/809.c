void main()
{
	int n,i,j,no[1000],shu[26]={0},max=0;
	char s[1000][20],c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&no[i],s[i]);
		for(j=0;j<strlen(s[i]);j++)
		{
			shu[s[i][j]-'A']++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(shu[i]>max)
		{
			max=shu[i];
			c='A'+i;
		}
	}
	printf("%c\n%d\n",c,max);
	for(i=0;i<n;i++)
	{
		if(strchr(s[i],c))
			printf("%d\n",no[i]);
	}
}