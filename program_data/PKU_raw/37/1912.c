main()
{
	char s[100005];
	int t,count,len,c;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%s",&s);
		c=0;
		len=strlen(s);
		int a[100005]={0};
		for(int j=0;j<len;j++)
		{
			count=0;
			for(int k=0;k<len;k++)
			{
				if(s[j]==s[k])
					count++;
			}
			if(count==1)
			{
				printf("%c\n",s[j]);
				c++;
				break;
			}
		}
		if(c==0)
		{
			printf("no");
		}
	}
	
}