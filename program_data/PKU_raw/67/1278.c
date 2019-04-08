int main()
{
	int n,i,a[10000],b[10000];
	double s,m,q,c[10000];
	scanf("%d",&n);
	scanf("%d%d",&a[0],&b[0]);
	s=b[0]*1.0/a[0];
	for(i=1;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=1;i<n;i++)
	{
		c[i]=b[i]*1.0/a[i];
		m=s-c[i];
		q=c[i]-s;
		if(m>0.05)
			printf("worse\n");
		if(q>0.05)
			printf("better\n");
		if(m<=0.05&&q<=0.05)
			printf("same\n");
	}
	return 0;
}
