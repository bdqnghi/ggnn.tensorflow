int main()
{
	char a[300]={'\0'};
	char b[300]={'\0'};
	char answer[300]={'\0'};
	char c[300]={'\0'};
	int n;
	int m;
	int i,j;
	int jinwei=0;
	gets(a);
	gets(b);
	for(m=0;;m++)
	{
		if(b[m]=='\0')
		{
			break;
		}
	}
	for(n=0;;n++)
	{
		if(a[n]=='\0')
		{
			break;
		}
	}
	for(i=0;i<=n-1;i++)
	{
		c[n-1-i]=a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		a[i]=c[i];
	}
	for(i=0;i<=n-1;i++)
	{
		c[n-1-i]='0';
	}
	for(i=0;i<=m-1;i++)
	{
		c[m-1-i]=b[i];
	}
	for(i=0;i<=m-1;i++)
	{
		b[i]=c[i];
	}
	for(i=0;i<=m-1;i++)
	{
		c[m-1-i]='0';
	}
	for(i=0;i<=299;i++)
	{
		answer[i]='0';
	}
	for(i=m;i<=299;i++)
	{
		b[i]='0';
	}
    for(i=n;i<=299;i++)
	{
		a[i]='0';
	}
	for(i=0;i<=299;i++)
	{
		if(a[i]+b[i]+jinwei-96<=9&&a[i]+b[i]+jinwei-96>=0)
		{
			answer[i]=a[i]+b[i]-48+jinwei;
			jinwei=0;
		}
		else
		{
			if(a[i]+b[i]+jinwei-96>=10)
			{
				answer[i]=a[i]+b[i]-48-10+jinwei;
			    jinwei=1;
			}
		}
	}
	for(i=299;i>=0;i--)
	{
		if(answer[i]!='0')
		{
			break;
		}
	}
	if(i!=-1)
	{
	for(j=i;j>=0;j--)
	{
		printf("%c",answer[j]);
	}
	}
	else
	{
		printf("0");
	}
	printf("\n");
	return 0;
}
