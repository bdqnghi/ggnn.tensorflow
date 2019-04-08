void main()
{
	double a[100][2],sum,d=0,m;
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			scanf("%lf",&a[i][j]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			m=(a[i][0]-a[j][0]) * (a[i][0]-a[j][0]) + (a[i][1]-a[j][1]) * (a[i][1]-a[j][1]);
			sum=sqrt((double)m);
			if(sum>d) d=sum;
		}
		printf("%.4lf",d);
}
	    