void main()
{
	int i,j,n;
	double a[20][2],d;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}
	d=0;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(d<sqrt((a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2])))
				d=sqrt((a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]));
		}	
	}
	printf("%.4lf\n",d);
}