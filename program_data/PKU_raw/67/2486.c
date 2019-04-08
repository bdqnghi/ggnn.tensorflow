void main()
{
	int i,n;
	double l[100],a,b,t;
	scanf("%d",&n);
	scanf("%lf%lf",&a,&b);
	l[0]=b/a;
	for(i=1;i<n;i++)
	{
		scanf("%lf%lf",&a,&b);
		l[i]=b/a;
		t=100*(l[i]-l[0]);
		if(t<-5)printf("worse\n");
		else if(t<=5)printf("same\n");
		else if(t>5)printf("better\n");
	}
	scanf("%d",&n);
}