int main()
{
	int n,i;
	double z,y,a,b;
	scanf("%d%lf%lf",&n,&z,&y);
	a=y/z;
	for(i=1;i<n;i++)
	{
		scanf("%lf%lf",&z,&y);
		b=y/z;
		if(b-a>0.05)
		{
			printf("better\n");
		}
		if(b-a<=0.05&&b-a>=-0.05)
		{
			printf("same\n");
		}
		if(b-a<-0.05)
		{
			printf("worse\n");
		}
	}
	return 0;
}
