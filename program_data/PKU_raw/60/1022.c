int main()
{
    int n,a[10000],i,j,k=1,s=0;
	scanf("%d",&n);
	a[0]=2;
    for(i=3;i<=n;i++)
	{
        s=0;
		for(j=2;j<=(i-1);j++)
		{
			if(i%j==0)
			{
				s=s+1;
			}
		}
		if(s==0)
		{
			a[k]=i;
			k=k+1;
		}
	}
	int b[10000][2],t=0;
	for(i=0;i<=(k-2);i++)
	{
		if(a[i]==(a[i+1]-2))
		{
			b[t][0]=a[i];
			b[t][1]=a[i+1];
			t=t+1;
		}
	}
	if(t==0)
	{
		printf("empty");
	}
	else
	{
		for(i=0;i<=(t-1);i++)
		{
			printf("%d %d\n",b[i][0],b[i][1]);
		}
	}
	return 0;
}
