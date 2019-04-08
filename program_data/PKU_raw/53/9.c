void main()
{
	int i,n,f,t,a[1000]={0},hash[100000]={0};
	scanf("%d",&n);
	for(i=1,f=0;i<=n;i++)
	{
		scanf("%d",&t);
		if(hash[t]++==0)
		{
			if(f++==0) printf("%d",t);
			else printf(",%d",t);
		}
	}
}