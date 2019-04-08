int main()
{
	int n;
	scanf("%d",&n);
	int a[p],i;
	double x=0.0,y=0.0,z=0.0,t=0.0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18)
		{
			x++;
		}
		else if(a[i]>18&&a[i]<36)
		{
			y++;
		}
		else if(a[i]>35&&a[i]<61)
		{
			z++;
		}
		else if(a[i]>60)
		{
			t++;
		}
	}
		x=100.0*x/n;
		y=100.0*y/n;
		z=100.0*z/n;
		t=100.0*t/n;
	
	printf("1-18: %.2lf%%\n",x);
	printf("19-35: %.2lf%%\n",y);
	printf("36-60: %.2lf%%\n",z);
	printf("60??: %.2lf%%\n",t);
	return 0;
}
