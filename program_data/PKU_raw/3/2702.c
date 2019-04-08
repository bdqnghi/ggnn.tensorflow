int main()
{
	int n,k,i,j,s;
	int a[1000];
	s=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++) 
		scanf("%d",&a[i]);
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if((a[i]+a[j])==k) s=s+1;
		}
	}
	if(s==0) printf("no");
	else printf("yes");
	return 0;
}
