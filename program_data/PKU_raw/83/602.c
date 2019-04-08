void main()
{
	int a[2][10],n,i,j;
	float xfjd=0,GPA,xfh=0,b[11];
	scanf("%d",&n);

	for(i=0;i<2;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	for(i=0;i<n;i++)
	{
		if(a[1][i]<60)
			b[i]=0;
		else if(a[1][i]<64)
			b[i]=1.0;
		else if(a[1][i]<68)
			b[i]=1.5;
		else if(a[1][i]<72)
			b[i]=2.0;
		else if(a[1][i]<75)
			b[i]=2.3;
		else if(a[1][i]<78)
			b[i]=2.7;
		else if(a[1][i]<82)
			b[i]=3.0;
		else if(a[1][i]<85)
			b[i]=3.3;
		else if(a[1][i]<90)
			b[i]=3.7;
		else if(a[1][i]<=100)
			b[i]=4.0;
	}


	for(i=0;i<n;i++)
		xfjd=a[0][i]*b[i]+xfjd;

    for(i=0;i<n;i++)
		xfh=xfh+a[0][i];

	GPA=xfjd/xfh;

	printf("%.2f",GPA);

}