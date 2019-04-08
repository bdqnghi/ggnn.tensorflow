void main()
{
	int n,i;
	double b,c,d,e,p1,p2,p3,p4;
    b=0.0;
	c=0.0;
	d=0.0;
	e=0.0;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
	{
	 if(a[i]>=1&&a[i]<=18)b=b+1;
	 if(a[i]>=19&&a[i]<=35)c=c+1;
	 if(a[i]>=36&&a[i]<=60)d=d+1;
	 if(a[i]>=61)e=e+1;
	 }
	 p1=b/n*100;
	 p2=c/n*100;
	 p3=d/n*100;
	 p4=e/n*100;
	 printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",p1,p2,p3,p4);
}