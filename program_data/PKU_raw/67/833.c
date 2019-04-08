int main()
{
	int i,n,zs,yx;
	double x,y,cha;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&zs,&yx);
		if(i==0)
		{
			x=100.0*yx/zs;
		}
		else
		{
			y=100.0*yx/zs;
			cha=x-y;
			if(cha>5)
			{
				printf("worse\n");
			}
			else if(cha<-5)
			{
				printf("better\n");
			}
			else
			{
				printf("same\n");
			}
		}
	}

	return 0;
}