void main()
{
	int n,a,b,c,max,smax,i,r,t;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<b)
	{
		t=b;
        b=a;
		a=t;
	}
	max=a;
	smax=b;
	for(i=1;i<=n-2;i++)
	{
		scanf("%d",&c);
		if(c>max)
		{
			r=max;
			max=c;
			smax=r;
		}
		else if(c>smax)
		{
		    smax=c;
		}
	}
	printf("%d\n",max);
	printf("%d\n",smax);
}

