
int main()
{   
    int i,n,j,l=0,min=50000,max=0;
	int sz[60000],szz[60000],szzz[60000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&sz[i],&szz[i]);
	}
	for(i=0;i<n;i++)
	{
		if(min>sz[i])min=sz[i];
		if(max<sz[i])max=sz[i];
		if(min>szz[i])min=szz[i];
		if(max<szz[i])max=szz[i];
	}
	float x[60000];
    for(i=0;i<n;i++)
	{
		for(j=sz[i],x[i]=sz[i]+0.5;j<szz[i];j++)
	   {
       if(x[i]<szz[i])
	   {szzz[j]++;}
	   x[i]++;
	   }
	}
	for(j=min;j<max;j++)
	{
		if( szzz[j]==0)
		{
			printf("no");
			return 0;
		}
	}
	printf("%d %d",min,max);
	return 0;
}
