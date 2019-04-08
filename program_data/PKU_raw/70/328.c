int main()
{
	int n,i,k;
	double x[100][2],y[100][100],z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i][0],&x[i][1]);
	}
	for(i=0;i<n;i++)
		for(k=0;k<n;k++)
	{
		y[i][k]=sqrt((x[i][0]-x[k][0])*(x[i][0]-x[k][0])+(x[i][1]-x[k][1])*(x[i][1]-x[k][1]));
	}
	z=y[0][0];
	for(i=0;i<n;i++)
		for(k=0;k<n;k++)
		if(z<y[i][k])z=y[i][k];
	printf("%.4lf",z);
	return 0;
}