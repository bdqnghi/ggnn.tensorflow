int main()
{
	int n,i,k;
	char s[10000][256],sd[10000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=0;s[i][k]!='\0';k++)
		{
			if(s[i][k]=='A')
			{
				sd[i][k]='T';
			}
			if(s[i][k]=='T')
			{
				sd[i][k]='A';
			}
			if(s[i][k]=='C')
			{
				sd[i][k]='G';
			}
			if(s[i][k]=='G')
			{
				sd[i][k]='C';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",sd[i]);
		printf("\n");
	}
	return 0;
}