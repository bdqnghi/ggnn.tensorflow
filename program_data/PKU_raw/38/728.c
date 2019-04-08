int main()
{
	int n,i,j,a[100];
	double b[100],s,c;
	i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<a[i];j++)
		{
			scanf("%lf",&b[j]);
		}
		s=0,c=0;
		for(j=0;j<a[i];j++)
		{
			c+=b[j];
		}
		c=c*1.0/a[i];
		for(j=0;j<a[i];j++)
		{
			s+=(b[j]-c)*(b[j]-c);
		}
		s=sqrt(s*1.0/a[i]);
		printf("%.5lf\n",s);
	}
	return 0;
}


	
