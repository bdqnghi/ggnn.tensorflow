int main()
{
	int n,i,j;
	int zongshu[1000],youxiao[1000];
	double x,y[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&zongshu[i],&youxiao[i]);
	}
	x=(double)youxiao[0]/zongshu[0];
	for(i=1;i<n;i++)
	{
		y[i]=(double)youxiao[i]/zongshu[i];
		if(x-y[i]>0.05)
		{
			printf("worse\n");
		}
		else if(y[i]-x>0.05)
		{
			printf("better\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}