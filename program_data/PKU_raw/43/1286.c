int main()
{
	int n,i,j,k=0,m=0;
	scanf("%d",&n);
	for(i=3;i<=n/2;i=i+2)
	{
		for(j=1;j<=sqrt(i);j++)
		{
			if(i%j==0)
				k=k+1;
		}
		for(j=1;j<=sqrt(n-i);j++)
		{
			if((n-i)%j==0)
				m=m+1;
		}
		if(m==1&&k==1) printf("%d %d\n",i,n-i);
		m=0;
		k=0;
	}
	return 0;
}