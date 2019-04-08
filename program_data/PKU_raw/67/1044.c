int main()
{
	int n,i,a,b;
	double x,y;
	scanf("%d%",&n);
    scanf("%d%d",&a,&b);
	x=(double)b/a;
	for (i=0;i<n-1;i++)
	{
		scanf("%d%d",&a,&b);
		y=(double)b/a;
		if (y-x>0.05) printf("better\n");
		else if (x-y>0.05) printf("worse\n");
		     else printf("same\n");
	}
    return 0;
}
