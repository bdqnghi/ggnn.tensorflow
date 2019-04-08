int main()
{
	int a[10001],i,j,k,d,n;
	for(i=0;i<10001;i++)
		a[i]=1;
	for(i=2;i<10001;i++)
	{
		if(a[i])
		{
			d=sqrt(i);
			for(k=2;k<=d;k++)
			{
				if(i%k==0)
					break;
			}
			if(k>d)
			{
				for(j=i+i;j<10001;j+=i)
				{
					a[j]=0;
				}
			}
			else
				a[i]=0;
		}
	}
	scanf("%d",&n);
	d=n/2;
	for(i=3;i<=d;i+=2)
	{
		if(a[i])
		{
			if(a[n-i])
			{
				printf("%d %d\n",i,n-i);
			}
		}
	}
	return 0;
}