int main()
{
	int i,j,u,n,b[N]={0};
	char a[N];
	scanf("%s",a);
	n=strlen(a);
	b[0]=1;
	for(i=1;i<n;i++)
	{
		if(a[i]==a[0]) b[i]=1;
		if(a[i]!=a[0]) b[i]=2;
	}
	u=n/2;
	while(u--)
	{
		for(j=0;j<n;j++)
		{
			if(b[j]==2)
			{
				for(i=j;i>=0;i--)
				{
					if(b[i]==1)
						break;
				}
					printf("%d %d\n",i,j);
					b[i]=0;
					b[j]=0;
			}
		}
	}
		return 0;
}