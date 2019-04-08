int main()
{
	int t;scanf("%d",&t);
	int i;char a[100000];
	for(i=0;i<t;i++)
	{
		scanf("%s",a);
		int zimu[26]={0};
		int k,len;int cache;
		len=strlen(a);
		for(k=0;k<len;k++)
		{
			cache=a[k]-'a';
			zimu[cache]=zimu[cache]+1;
		}
		for(k=0;k<len;k++)
		{
			if(zimu[a[k]-'a']==1)
			{
				printf("%c\n",a[k]);
				break;
			}
		}
		if(k==len)
		{printf("no\n");
		}
	}
	return 0;
}
