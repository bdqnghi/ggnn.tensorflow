int main()
{
	int n,a[100],i;
	double w,x,y,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	w=0,x=0,y=0,z=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
			w+=1;
		else if(a[i]<=35)
			x+=1;
		else if(a[i]<=60)
			y+=1;
		else
			z+=1;
	}
	w=100*w/n;
	x=100*x/n;
	y=100*y/n;
	z=100*z/n;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",w,x,y,z);
}