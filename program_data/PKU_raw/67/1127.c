int main()
{
	int n,i;
	double a[100],b[100],x,y[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&a[i],&b[i]);
	}
	x=b[0]*1.0/a[0];
	for(i=1;i<n;i++)
	{
		y[i]=b[i]*1.0/a[i];
		if(x-y[i]>0.05)
			printf("worse\n");
		if(x-y[i]<-0.05)
			printf("better\n");
		if(x-y[i]<=0.05&&x-y[i]>=-0.05)
			printf("same\n");
	}
	return 0;
}