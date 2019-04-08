void main()
{
	int n,i,j;
	double a[100],b[100],d,max=0,d2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%lf%lf",&a[i],&b[i]);
    for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			d2=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
			d=sqrt(d2);
			max=max>d?max:d;
		}
		printf("%.4lf",max);
}