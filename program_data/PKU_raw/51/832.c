int main()
{
	char str[503];
	char str2[501][6]={'\0'};
	int a[503];
	int i,j,n,p,flag,t,k;
	scanf("%d",&n);
	scanf("%s",str);
	t=strlen(str)-n;
	for(i=0;i<=502;i++)
	{
		a[i]=0;
	}
	for(i=0;i<=t;i++)
	{
		for(j=i,p=0;j<=i+n-1;j++)
		{
			str2[i][p]=str[j];
			p++;
		}
	}
	for(i=0;i<=t;i++)
	{
		for(j=i-1,flag=0;j>=0;j--)
		{
			if(strcmp(str2[i],str2[j])==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0||i==0)
		{
			for(j=i;j<=t;j++)
			{
				if(strcmp(str2[i],str2[j])==0)
				{
					a[i]++;
				}
			}
		}
	}
	for(i=0,k=0;i<=t;i++)
	{
		if(a[i]>k)
		{
			k=a[i];
		}
	}
	if(k>1)
	{
		printf("%d\n",k);
		for(i=0;i<=t;i++)
		{
			if(a[i]==k)
			{
				printf("%s\n",str2[i]);
			}
		}
	}
	else if(k=1)
	{
		printf("NO");
	}
	return 0;
}
