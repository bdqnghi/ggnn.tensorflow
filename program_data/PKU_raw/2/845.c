int main()
{
	int n,len,i,j,book[1000],num[26]={0},k=0,t,m=0;
	char w[1000][27],c='A';
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&book[i],w[i]);
		len=strlen(w[i]);
		for(j=0;j<len;j++)
		{
			for(c='A',t=0;c<='Z';c++)
			{
				if(w[i][j]==c)
				{
					num[t]++;
					break;
				}
				t++;
			}
		}
	}
    for(i=0;i<26;i++)
	{
		if(num[i]>m)
		{
			m=num[i];
			k=i;
		}
	}
	c='A'+k;
	printf("%c\n",c);
	printf("%d\n",num[k]);
	for(i=0;i<n;i++)
	{
        len=strlen(w[i]);
		for(j=0;j<len;j++)
		{
			if(w[i][j]==c)
			{
				printf("%d\n",book[i]);
				break;
			}
		}
	}
	return 0;
}
