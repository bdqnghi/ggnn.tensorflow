int main()
{
	int n,i;
	double std,a,b,x,y;
	double sz[100];
	scanf("%d",&n);
	scanf("%lf%lf",&a,&b);
	std=b/a;
	for(i=1;i<n;i++)
	{
		scanf("%lf%lf",&x,&y);
		if(((y/x)-std)>0.05)
		{
			sz[i]=1;
		}
		else if((std-(y/x))>0.05)
		{
			sz[i]=0;
		}
		else
		{
			sz[i]=2;
		}
	}
	for(i=1;i<n;i++)
	{
		if(sz[i]==1)
		{
			printf("better\n");
		}
		else if(sz[i]==0)
		{
			printf("worse\n");
		}
		else if(sz[i]==2)
		{
			printf("same\n");
		}
	}
	return 0;
}