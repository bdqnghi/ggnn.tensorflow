void main()
{
	int i,a[10],n,h,b[10];
	double H,c[10],GPA;
	h=0;
	H=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		h=h+a[i];
	}
			
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);

		if(b[i]<=100&&b[i]>=90)
		    c[i]=4.0;
        if(b[i]<=89&&b[i]>=85)
			c[i]=3.7;
		if(b[i]<=84&&b[i]>=82)
			c[i]=3.3;
		if(b[i]<=81&&b[i]>=78)
			c[i]=3.0;
		if(b[i]<=77&&b[i]>=75)
			c[i]=2.7;
		if(b[i]<=74&&b[i]>=72)
			c[i]=2.3;
		if(b[i]<=71&&b[i]>=68)
			c[i]=2.0;
		if(b[i]<=67&&b[i]>=64)
			c[i]=1.5;
		if(b[i]<=63&&b[i]>=60)
			c[i]=1.0;
		if(b[i]<=59&&b[i]>=0)
			c[i]=0;
	}
	for(i=0;i<n;i++)
		H=H+a[i]*c[i];
	GPA=H/h;
	printf("%.2lf",GPA);
}



