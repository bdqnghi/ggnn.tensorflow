int main()
{
	int n,i,a,b,d,e;
	float x,y,c;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	x=(float)b/a;
	for(i=1;i<n;i++)
	{
		scanf("%d%d",&d,&e);
		y=(float)e/d;
		if((y-x)>=0.05)
		{
			printf("better\n");
		}
		else if((x-y)>=0.05)
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