
main()
{
	int i,j,dmax,n,array[32],d[32]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	d[n-1]=1;
    for(i=n-2;i>=0;i--)
	{
		for(j=i+1;j<n;j++)
		{
			if((array[j]<=array[i])&&(d[i]<d[j]+1))
			{
			   d[i]=d[j]+1;
			}
		}
    }
    dmax = 0;
    for(i=0;i<n;i++)
	{  
		if(d[i]>dmax)
		{
			dmax = d[i];
		}
    }
    printf("%d",dmax);
return 0;
}
