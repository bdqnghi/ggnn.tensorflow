int main()
{
    int a[51000],b[51000];
	int sz[11000];
	int n,i,min,max,j;
	min=10000;
	max=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
    for(i=0;i<11000;i++)
    {
    	sz[i]=0;
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]>max)
    	{
    		max=a[i];
    	}
    	if(a[i]<min)
    	{
    		min=a[i];
    	}
    		if(b[i]>max)
    	{
    		max=b[i];
    	}
    	if(b[i]<min)
    	{
    		min=b[i];
    	}
    }
    for(i=0;i<n;i++)
    {
    	for(j=2*a[i]-2;j<=2*b[i]-2;j++)
    	{
    		sz[j]=1;
    	}
    }
    i=1;
    for(j=2*min-2;j<=2*max-2;j++)
	if(sz[j]==0){
		i=0;
	}
	if(i!=0)
	{
		printf("%d %d",min,max);
	}else
	{
		printf("no");
	}
	return 0;
}