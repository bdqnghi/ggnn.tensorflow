int main()
{
	int i,k,n,sum,sz[1000];
	scanf("%d",&n);
	char s[1000][20];
	for(i=0;i<=n-1;i++)
		scanf("%s\n",&s[i]);
	for(i=0;i<n;i++)
	{
		sum=0;
		sz[i]=strlen(s[i]);
		for(k=0;k<sz[i];k++)
		{
			if((s[i][k]>='a'&&s[i][k]<='z')||(s[i][k]>='A'&&s[i][k]<='Z')||(s[i][k]>='0'&&s[i][k]<='9')||(s[i][k]=='_'))
				sum++;
		}
		if(sum==sz[i]&&((s[i][0]>='a'&&s[i][0]<='z')||(s[i][0]>='A'&&s[i][0]<='Z')||(s[i][0]=='_')))
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}