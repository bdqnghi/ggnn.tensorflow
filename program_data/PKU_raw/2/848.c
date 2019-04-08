int main()
{
	int n,i,j,d[1000];
	char zuo[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d",&n);
	char s[1000][26],len;
	int sum[26]={0},k;
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&d[i],s[i]);
		len=strlen(s[i]);
		for(j=0;j<len;j++)
		{
			for(k=0;k<26;k++)
			{
				if(s[i][j]=='A'+k) sum[k]++;
			}
		}
	}
	int max=0,count=0;
	char maxid;
	for(i=0;i<26;i++)
	{
		if(sum[i]>max)
		{
			max=sum[i];
		    maxid=i+'A';
		}
	}
	printf("%c\n%d\n",maxid,max);
	int t[1000];
	for(i=0;i<n;i++)
	{
		len=strlen(s[i]);
		for(j=0;j<len;j++)
		{
			if(s[i][j]==maxid)
			{
				count++;
				t[count]=d[i];
			}
		}
	}
	for(i=1;i<=count;i++) printf("%d\n",t[i]);
	return 0;
}