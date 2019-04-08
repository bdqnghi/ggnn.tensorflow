void main()
{
	int m,n,i,j,l,p,k,t=0,a[100],sum=0,b[1000];
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		int k=(int)sqrt(i);
		for(j=2;j<=k;j++)
		{
			if(i%j==0) break;
		}
		if(j>k)
		{
			l=i;
			t=0;
			do
			{
				a[t]=l%10;
				t++;
				l=l/10;
			}
			while(l>0);
			for(p=0;p<t/2;p++)
			{
                if(a[p]!=a[t-p-1]) break;
			}
			if(p>=t/2) 
			{
				b[sum]=i;
				sum++;
			}
		}
	}
	if(sum==0) printf("no");
	else
	{
	for(k=0;k<sum-1;k++)
		printf("%d,",b[k]);
	printf("%d",b[sum-1]);
	}
}


