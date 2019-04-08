int main()
{
	int n,i,a[100];
	double x,y,z,k,b,c,d,e;
	scanf("%d",&n);
	b=0;
	c=0;
	d=0;
	e=0;
	for(i=0;i<n;i++){
		scanf("%d",&(a[i]));
		if(a[i]<=18)
			b++;
		if(a[i]>=19&&a[i]<=35)
			c++;
		if(a[i]>=36&&a[i]<=60)
			d++;
		if(a[i]>60)
			e++;
	}
	x=100*b/(b+c+d+e);
	y=100*c/(b+c+d+e);
	z=100*d/(b+c+d+e);
	k=100*e/(b+c+d+e);
	printf("1-18: %.2lf%%\n",x);
	printf("19-35: %.2lf%%\n",y);
	printf("36-60: %.2lf%%\n",z);
	printf("60??: %.2lf%%\n",k);
	return 0;

}