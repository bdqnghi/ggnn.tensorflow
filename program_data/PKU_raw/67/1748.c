int main()
{
	int n,i;
	double a,zs,yx;
	double yxl;
	scanf("%d",&n);
	scanf("%lf %lf",&zs,&yx);
	a=(yx/zs)*100;
	for(i=0;i<n-1;i++)
	{
		scanf("%lf %lf",&zs,&yx);
		yxl=(yx/zs)*100;
		if(yxl>=a)
		{
			if((yxl-a)>5)
			{
				printf("better\n");
			}
			else
			{
				printf("same\n");
			}
		}
	else
		{
			if((a-yxl)>5)
			{
				printf("worse\n");
			}
			else
			{
				printf("same\n");
			}
		}
	}
	return 0;
}