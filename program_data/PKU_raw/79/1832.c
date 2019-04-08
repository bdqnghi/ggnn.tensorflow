int main()
{
	int m,n,i,k,p,q;
	scanf("%d %d\n",&n,&m);
	int a[300][300];
	while(m!=0&&n!=0)
	{
	    for(i=0;i<=n-1;i++)
		{a[0][i]=i+1;}
		p=m;
		q=n;
		k=0;
		while(q>1)
		{
			p=p%q;
			k=k+1;
			if(p>0&&p<n-k+1)
			{
			    for(i=0;i<=n-k-p;i++)
			    {a[k][i]=a[k-1][i+p];}
			    for(i=n-k-p+1;i<=n-k;i++)
			    {a[k][i]=a[k-1][i-n+k+p-1];}
			}
			else if(p==0)
			{
				for(i=0;i<=n-k;i++)
			    {a[k][i]=a[k-1][i];}
			}
			    p=m;
			    q=q-1;
		}
		printf("%d\n",a[n-1][0]);
		scanf("%d %d\n",&n,&m);
	}
	return 0;
}