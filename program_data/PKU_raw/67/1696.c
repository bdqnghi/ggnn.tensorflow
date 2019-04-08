
int main()
{
	int n,a,b,m,p;
	int i;
	double x,y;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	x=(1.0*b)/(1.0*a);
	for(i=1;i<n;i++)
	{
		scanf("%d %d",&m,&p);
		y=(1.0*p)/(1.0*m);
		
		if(y-x>0.05)
		{
			printf("better\n");
		}
		else if (x-y>0.05)
		{
			printf("worse\n");
		}
		else 
		{
			printf("same\n");
		}
		
	}
	return 0;

}
