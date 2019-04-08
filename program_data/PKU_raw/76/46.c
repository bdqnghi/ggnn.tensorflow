
main()
{
	int a[number][2],i,j,n,c,d,min,max;
	scanf("%d",&n);
	for(i=0; i<=n-1; i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	for(i=0; i<=n-2; i++)
	{
		for(j=0; j<=n-2-i; j++)
		{
			if( a[j][0]>a[j+1][0] ) 
			{
				c=a[j][0];
				a[j][0]=a[j+1][0];
				a[j+1][0]=c;
				d=a[j][1];
				a[j][1]=a[j+1][1];
				a[j+1][1]=d;
			}
		}
	}
    min=a[0][0];
	max=a[0][1];
	for(i=1; i<=n-1; i++)
	{
		if(max<a[i][0])
		{
			printf("no\n");
			return 0;
		}
		if(max<a[i][1]) max=a[i][1];
	}
	printf("%d %d\n",min,max);
	return 0;
}