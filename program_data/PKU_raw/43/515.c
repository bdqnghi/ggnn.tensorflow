int a[A]={0};
int main()
{
    int n,i,s,j;
	scanf("%d",&n);
    for(i=2;i<A;i++)
	{
		if(a[i]==0)
		{
			for(j=i<<1;j<A;j+=i)
			{
				a[j]=1;
			}
		}
	}
	for(i=3;i<=n/2;i+=2)
	{
		if(a[i]==0)
		{
			if(a[n-i]==0) printf("%d %d\n",i,n-i);
		}
	}
	return 0;	
	
}
	
