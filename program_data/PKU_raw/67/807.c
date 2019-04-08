int main()
{
	int n,i,total[100],youxiao[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&total[i],&youxiao[i]);
	}
	double x=1.0*youxiao[0]/total[0];
	double y[100];
	for(i=1;i<n;i++)
	{
		y[i]=1.0*youxiao[i]/total[i];
	}
	for(i=1;i<n;i++)
	{
		if(y[i]-x>0.05)
		{printf("better\n");}
		else if(x-y[i]>0.05)
		{printf("worse\n");}
		else
		{printf("same\n");}
	}
	return 0;
}