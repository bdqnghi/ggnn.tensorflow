int main()
{
	int a[1000],k,n;
	int i,j,of=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]!=a[j])
			{
				if(k==a[i]+a[j])
				{
				of++;
				}
			}
		}
	}
	if(of>0)
	{printf("yes");}
    if(of==0){printf("no");}
	return 0;
}