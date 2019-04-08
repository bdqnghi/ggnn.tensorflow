int main()
{
	int i,x,n,a[100],b[100];
	float y[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
		y[i]=1.0*b[i]/a[i];
	}
	for(i=1;i<n;i++)
	{
		if(y[i]-y[0]>0.05)
		printf("better\n");
		else if(y[0]-y[i]>0.05)
			printf("worse\n");
		else
			printf("same\n");
	}
	return 0;
}