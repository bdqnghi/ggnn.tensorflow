main()
{
	long n,m,t,i,j,k;
	int p,q,a,b;
	scanf("%ld",&n);
	for(m=6;m<=n;m=m+2)
	{
		printf("%ld=",m);
		for(i=3;i<m;i=i+2)
		{
			t=m-i;
			a=(int)sqrt(i);
			b=(int)sqrt(t);
			for(j=1;j<=a;j=j+2)
			{
				if(i%j==0&&i!=j&&j!=1)
				{p=1;break;}
				else p=0;
			}
			for(k=1;k<=b;k=k+2)
			{
				if(t%k==0&&t!=k&&k!=1)
				{q=1;break;}
				else q=0;
			}
			if(p==0&&q==0)
			{printf("%ld+%ld\n",i,t);break;}
		}
	}
}




