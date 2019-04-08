int main()
{
	int n,i;
	int zong[1000];
	int youxiao[1000];
	double c[1000];
	double ji,xin;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&(zong[i]),&(youxiao[i]));
	}
	ji=youxiao[0]*1.0/zong[0];
	for(i=1;i<n;i++)
	{
		xin=youxiao[i]*1.0/zong[i];
		c[i]=xin-ji;
	}
	for(i=1;i<n;i++)
	{
		if(c[i]>0.05)
		{
			printf("better\n");
		}else
		{
			if(c[i]<(-0.05))
			{
				printf("worse\n");
			}else
			{
				printf("same\n");
			}
		}
	}
	return 0;
}