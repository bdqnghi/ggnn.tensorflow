int main()
{
	int n,p=0,q=0,r=0,s=0,i;
	double c1,c2,c3,c4;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
		{
			p=p+1;
		}
		if(a[i]>=19&&a[i]<=35)
		{
			q=q+1;
		}
		if(a[i]>=36&&a[i]<=60)
		{
			r=r+1;
		}
		if(a[i]>=61)
		{
			s=s+1;
		}
	}
	c1=(double)p/n*100;
	c2=(double)q/n*100;
	c3=(double)r/n*100;
	c4=(double)s/n*100;
	printf("1-18: %.2lf",c1);
	printf("%%\n");
	printf("19-35: %.2lf",c2);
	printf("%%\n");
    printf("36-60: %.2lf",c3);
	printf("%%\n");
    printf("60??: %.2lf",c4);
	printf("%%\n");
    return 0;
}
