int main()
{
	int i, n,a,b,j,l=0,e=0,k;
	scanf("%d",&n);
	for(i=3;i<=n/2;i+=2)
	{
		for(j=3;j<=i/2;j+=2)
		{
			if(i%j==0)
				l=l+1;
		}
		for(k=3;k<=(n-i)/2;k+=2)
		{
			if((n-i)%k==0)
				e=e+1;
		}
		if(l==0&&e==0)
			printf("%d %d\n",i,n-i);
		j=3;
		k=3;
l=0;
e=0;
	}
	return 0;
}

