  int  main( )
  {
    int n,k,i,r,a[1000],x=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<=n-1;i=i+1)
	{
		scanf("%d",&a[i]);
	}
	for (r=0;r<=n-2;r=r+1)
	{
		for(i=r+1;i<=n-1;i=i+1)
		{
			if((a[r]+a[i])==k)
			{
				x=x+1;	
			}
		}
	}
	if(x==0)
		printf("no");
	else if(x!=0)
	    printf("yes");
	return 0;
  }