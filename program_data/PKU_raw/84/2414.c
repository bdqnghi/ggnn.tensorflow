int main()
{
	int n,a,e,x=0,y=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(x<y)
		{
			e=y;
			y=x;
			x=e;
		}
		if(a>x)
		{
			y=x;
			x=a;
			
		}
		if(a<x&&a>y)
		{
			y=a;
		}
	}
	printf("%d\n",x);
	printf("%d\n",y);
	return 0;
}
