int main()
{
	double distance(double,double,double,double);
	int n,i,j;
	double a[50][2];
	double max=0,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%lf %lf",&a[i][0],&a[i][1]);
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{temp=distance(a[i][0],a[i][1],a[j][0],a[j][1]);
		if(temp>max) max=temp;}
	}
	printf("%.4f\n",max);
}
double distance(double a,double b,double c,double d)
{
	double k;
	k=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	return (k);
}