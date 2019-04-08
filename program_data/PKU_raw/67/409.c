int main()
{
	int i,n;
	double j[500],a[500][2];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&a[i][0],&a[i][1]);
	}
	j[0]=100*a[0][1]/a[0][0]*1.0;
	for(i=1;i<n;i++)
	{
		j[i]=100*a[i][1]/a[i][0]*1.0;
	}
	for(i=1;i<n;i++)
	{
		if(j[i]-j[0]>5)
		{
			printf("better\n");
		}
		if(j[0]-j[i]>5)
		{
			printf("worse\n");
		}
		if((j[i]-j[0]<=5)&&(j[0]-j[i]<=5))
		{
			printf("same\n");
		}
	}
	return 0;
}
