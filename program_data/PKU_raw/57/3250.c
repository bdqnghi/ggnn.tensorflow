int main()
{
	int n,i,j,k,sum[50],len[50];
	char s[50][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&s[i]);
		len[i]=strlen(s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s[i][len[i]-1]=='r'&&s[i][len[i]-2]=='e')
		{
			sum[i]=0;
			
		}
		if(s[i][len[i]-1]=='y'&&s[i][len[i]-2]=='l')
		{
			sum[i]=1;
			
		}
		if(s[i][len[i]-1]=='g'&&s[i][len[i]-2]=='n'&&s[i][len[i]-3]=='i')
		{
			sum[i]=2;
			
		}
	}
	for(i=0;i<n;i++)
	{
		if(sum[i]==0||sum[i]==1)
		{
			for(k=0;k<=len[i]-4;k++)
				printf("%c",s[i][k]);
			printf("%c\n",s[i][len[i]-3]);
		}
		if(sum[i]==2)
		{
			for(k=0;k<=len[i]-5;k++)
				printf("%c",s[i][k]);
			printf("%c\n",s[i][len[i]-4]);
		}
	}
	return 0;
}
