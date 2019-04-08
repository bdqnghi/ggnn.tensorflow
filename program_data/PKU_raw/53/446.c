void main()
{
    int n,a[300],i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=1;i<=n;i++)
	{
		if(i==1) printf("%d",a[1]);
		else
		{
			for(j=1;j<i;j++)
			{
			if(a[i]==a[j]) a[i]=-1;
			}
		if(a[i]!=-1) printf(",%d",a[i]);	
		}
		
	}
		
}	