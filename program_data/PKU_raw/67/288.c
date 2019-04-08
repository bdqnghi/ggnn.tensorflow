int main()
{
	int n,i,a[N],b[N];
	double x[N];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
		x[i]=1.0*b[i]/a[i];
	}
	for(i=1;i<n;i++)
	{
		if(x[i]-x[0]>0.05)
		{
			printf("better\n");
		}
		else if(x[0]-x[i]>0.05)
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