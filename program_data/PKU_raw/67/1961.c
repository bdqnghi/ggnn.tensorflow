int main()
{
	int t,i;
	double m,n,sz1[100]={0},sz2[100]={0};
	double x,y;
	scanf("%d",&t);
	scanf("%lf %lf",&m,&n);
	x=1.0*n/m;
	
	for(i=1;i<t;i++)
	{
		scanf("%lf %lf",&sz1[i],&sz2[i]);
	}
	for(i=1;i<t;i++)
	{
		y=1.0*sz2[i]/sz1[i];
		if(y-x>0.05)
		{
			printf("better\n",y ,x);
		}
		if(x-y>0.05)
		{
			printf("worse\n");
		}
		if(x-y<=0.05&&y-x<=0.05)
		{
			printf("same\n");
		}
	}
	return 0;
}
