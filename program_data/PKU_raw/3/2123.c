int main()
{
	int n,k,num[1000],i,j,p=0;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	scanf("%d",&num[i-1]);
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		if(num[i-1]+num[j-1]==k)
		{
			p=p+1;
			break;
		}
		if(p>0) break;
	}
	if(p>0) printf("yes");
	else printf("no");
	return 0;
}