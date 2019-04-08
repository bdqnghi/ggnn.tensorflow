void main()
{
	int n,i;
	double a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	int x[100];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
		if(x[i]<=18)
			a=a+1;
		else
		if(x[i]<=35)
			b=b+1;
		else
		if(x[i]<=60)
			c=c+1;
		else
		if(x[i]>=61)
			d=d+1;
	}
	a=a*100/n;
	b=b*100/n;
	c=c*100/n;
	d=d*100/n;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",a,b,c,d);
}