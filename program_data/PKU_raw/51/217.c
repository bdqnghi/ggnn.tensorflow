int main()
{
	int maxflag,max,flag[500];
	char ch[500][500],str[500];
	int i,j,l,n;
	for(i=0;i<500;i++)
		flag[i]=1;
	scanf("%d",&n);
	getchar();
	gets(str);
	l=strlen(str);
	for(i=0;i<=l-n;i++)
	{
		for(j=i;j<i+n;j++)
		{
			ch[i][j-i]=str[j];
		}
	}
	maxflag=0;
	int count[500];
	for(i=0;i<=l-n;i++)
	{
		count[i]=0;
		if(flag[i]!=0)
		{
			for(j=0;j<=l-n;j++)
			{
				if(strcmp(ch[i],ch[j])==0&&i!=j)
				{
					count[i]++;
					flag[j]=0;
				}
			}
		}
		count[i]++;
		if(count[i]>maxflag)
		{
			maxflag=count[i];
		}
	}
	if(maxflag!=1)
	{
		printf("%d\n",maxflag);
		for(i=0;i<=l-n;i++)
		{
			if(count[i]==maxflag&&flag[i]!=0)
				printf("%s\n",ch[i]);
		}
	}
	else printf("NO");
}
