void main()
{
	int a[10],b[10];
	double c[10],sum=0,jd[10],e=0;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		if(b[i]>=90)
			c[i]=4;
	    if(b[i]<90&&b[i]>=85)
			c[i]=3.7;
	    if(b[i]<85&&b[i]>=82)
			c[i]=3.3;
		if(b[i]<82&&b[i]>=78)
			c[i]=3.0;
		if(b[i]<78&&b[i]>=75)
			c[i]=2.7;
		if(b[i]<75&&b[i]>=72)
			c[i]=2.3;
		if(b[i]<72&&b[i]>=68)
			c[i]=2.0;
		if(b[i]<68&&b[i]>=64)
			c[i]=1.5;
		if(b[i]<64&&b[i]>=60)
			c[i]=1.0;
		if(b[i]<60)
			c[i]=0;
		jd[i]=c[i]*a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+jd[i];
		e=e+a[i];
	}
	sum=sum/e;
	printf("%.2f",sum);
}


