
void main()
{
	int i,j,n,m;
	double a[1001]={0},mean,sum,result;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&m);
		for (sum=0,j=0;j<m;j++)
		{
			scanf ("%lf",&a[j]);
			sum=sum+a[j];
		}
		mean=sum/m;
		a[m]=-1;
		for (sum=0,j=0;j<m;j++)
			sum=sum+(a[j]-mean)*(a[j]-mean);
		result=sum/m;
		result=sqrt(result);
		printf ("%.5lf\n",result);
	}
}
