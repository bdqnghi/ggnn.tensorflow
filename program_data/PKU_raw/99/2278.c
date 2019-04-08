int main()
{
	int n;
	scanf("%d",&n);
	int sz[100];
	int i;
	int a=0,b=0,c=0,d=0;
	for (i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		if (sz[i]<=18)
			a=a+1;
		if (sz[i]>=19&&sz[i]<=35)
			b=b+1;
		if (sz[i]>=36&&sz[i]<=60)
			c=c+1;
		if (sz[i]>60)
			d=d+1;
	}
	double a1,b1,c1,d1;
	a1=(double)(a*1.0/n*100);
	b1=(double)(b*1.0/n*100);
	c1=(double)(c*1.0/n*100);
	d1=(double)(d*1.0/n*100);
	printf("1-18: %.2lf",a1);
	printf("%%\n");
    printf("19-35: %.2lf",b1);
		printf("%%\n");
	printf("36-60: %.2lf",c1);
		printf("%%\n");
	printf("60??: %.2lf",d1);
		printf("%%\n");
	return 0;
}