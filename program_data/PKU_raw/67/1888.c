int main()
{
	int n,e,a;
	double p,x;
	scanf("%d",&n);
	scanf("%d %d",&a,&e);
	p=1.0*e/a;
	for(int i=1;i<=n-1;i++)
	{
	scanf("%d %d",&a,&e);
	x=1.0*e/a;
	if((x-p)*(x-p)<=0.0025)printf("same\n");
	if((x-p)>0.05)printf("better\n");
	if((x-p)<-0.05)printf("worse\n");
	}
	return 0;
}
