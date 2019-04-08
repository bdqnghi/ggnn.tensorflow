int main(int argc, char* argv[])
{
	int i,j,n;
	double x[100],y[100];
	double s[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i],&y[i]);

	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s[i][j]=sqrt((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]));


		}
	}
	double d=s[0][1];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(s[i][j]>d)
		{
			d=s[i][j];
		}
		}
	}
	printf("%.4f\n",d);
	return 0;
}
