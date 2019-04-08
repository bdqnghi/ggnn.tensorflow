double dis(double a,double b,double c,double d)
{
	double l=(a-c)*(a-c)+(b-d)*(b-d);
	return(l);
}
main()
{
	int n,m=0,i,j,k,r;
	double p[10][2],res[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf",&p[i][0]);
        scanf("%lf",&p[i][1]);
	}

	for (j=0;j<n;j++)
	{
		for (k=j+1;k<n;k++)
		{
			res[m]=dis(p[j][0],p[j][1],p[k][0],p[k][1]);
			m++;
		}
	}
	for (i=1;i<m;i++)
	{
		if (res[i]<res[i-1])
           res[i]=res[i-1];
	}
	printf("%.4f",sqrt(res[m-1]));
}