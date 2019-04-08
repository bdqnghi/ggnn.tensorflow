int main()
{
	int n,m,i,k,a[301],b;
	while(1)
	{
		scanf("%d %d",&n,&m);
		k=1;
		if(n==0&&m==0) break;
		for(i=1;i<=n;i++) a[i]=i;
		for(i=0;i<=n-2;i++)
		{
			k=(m+k-1)%(n-i);
			if(k==0) k=n-i;
			else for(b=k;b<=n-i-1;b++) a[b]=a[b+1];
		}
		printf("%d\n",a[1]);
	}
}