void main()
{
	int n,i,a[100];
	double g,k,t,m,b,c,d,f;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0,k=0,t=0,m=0,b=0;i<n;i++)
	{
		if(a[i]>=1&&a[i]<=18)
			k=k+1;
		if(a[i]>=19&&a[i]<=35)
			t=t+1;
		if(a[i]>=36&&a[i]<=60)
			m=m+1;
		else if(a[i]>=60)
			b=b+1;
	}
	g=k/n*100;
	c=t/n*100;
	d=m/n*100;
	f=b/n*100;
    printf("1-18: %.2lf%%\n",g);
	 printf("19-35: %.2lf%%\n",c);
	  printf("36-60: %.2lf%%\n",d);
	   printf("60??: %.2lf%%\n",f);
}