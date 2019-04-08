int main()
{
	int n;
	scanf("%d",&n);
	int hz[1000],zy[1000];
	scanf("%d %d",&hz[0],&zy[0]);
	double a,result[1000];
	a=zy[0]*1.0/hz[0]*1.0;
	int i;
	for(i=1;i<n;i++)
	{
		scanf("%d %d",&hz[i],&zy[i]);
		result[i]=zy[i]*1.0/hz[i]*1.0;
		if(result[i]-a>0.05)
		{
			printf("better\n");
		}
		 else if(result[i]-a<-0.05)
		{
			printf("worse\n");
		}
		 else if(result[i]-a>=-0.05 && result[i]-a<=0.05)
		{
			printf("same\n");
		}
	}
	return 0;
}