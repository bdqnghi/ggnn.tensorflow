double length(double a,double b,double c,double d)
{
	double l;
	l=(a-c)*(a-c)+(b-d)*(b-d);
	l=sqrt(l);
	return l;
}
int main()
{
	int n;
	cin>>n;
	double a[1000];
	double b[1000];
	int i,j;
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	double max=0;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
		  	if(length(a[i],b[i],a[j],b[j])>max)
		  	max=length(a[i],b[i],a[j],b[j]);
		}
	}
	printf("%.4f\n", max);
	return 0;
	
}