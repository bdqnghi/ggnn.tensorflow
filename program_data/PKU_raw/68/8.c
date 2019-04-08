int main()
{
	long n,m,i,j,l,k=0,p[10000]={2};
	scanf("%ld",&n);
	for(i=3;i<n;i+=2)
	{
		m=(int)sqrt(i);
		for(j=0;j<=k&&p[j]<=m;j++)
			if(i%p[j]==0)
				goto a;
		p[++k]=i;
		a:;
	}
	for(i=6;i<=n;i+=2)
	{
		for(j=1;j<=k;j++)
			for(l=k;l>=j;l--)
			{
				if(i==p[j]+p[l])
				{
					printf("%ld=%ld+%ld\n",i,p[j],p[l]);
					goto b;
				}
				else if(i>p[j]+p[l])break;
			}
		b:;
	}
	return 0;
}