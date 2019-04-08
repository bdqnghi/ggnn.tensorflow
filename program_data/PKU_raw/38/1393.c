int main()
{
	int n,i=0,j=0;
	scanf("%d",&n);
    int a[101]={0};
	double b[101]={0},s[101]={0},p[101]={0},q[101]={0},z[101]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<a[i];j++)
		{
			scanf("%lf",&b[j]);
			s[i]=s[i]+b[j];
		}
		p[i]=(double)s[i]/a[i];
		for(j=0;j<a[i];j++)
		{
			q[i]=q[i]+(b[j]-p[i])*(b[j]-p[i]);
		}
		z[i]=(double)sqrt(q[i]/a[i]);
		printf("%.5f\n",z[i]);
	}
	return 0;
}