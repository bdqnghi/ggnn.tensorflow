int main()
{
	int n;
	scanf("%d",&n);
	double jsum,jyx;
	scanf("%lf %lf",&jsum,&jyx);
	double x=jyx/jsum;
	int i;
	double sum[100],yx[100];
	double y[100];
	for(i=0;i<n-1;i++)
	{
		scanf("%lf %lf",&sum[i],&yx[i]);
		y[i]=yx[i]/sum[i];
		if((y[i]-x)>0.05)
		{
			printf("better\n");
		}
		else if((x-y[i])>0.05)
		{
			printf("worse\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}