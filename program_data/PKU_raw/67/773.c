int main()
{
	int n,i,a[100],b[100];
	double c,d;
	scanf("%d",&n);
	scanf("%d %d",&a[0],&b[0]);
	c=(double)b[0]/a[0];
	for(i=1;i<n;i++)
	{
        scanf("%d %d",&a[i],&b[i]);
		d=(double)b[i]/a[i];
		if(d>(c+0.05))
		{
			printf("better\n");
		}
		if(d<(c-0.05))
		{
			printf("worse\n");
		}
		if(d<=(c+0.05)&&d>(c-0.05))
		{
			printf("same\n");
		}
	}
	return 0;
}

		
