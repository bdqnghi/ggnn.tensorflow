void main()
{
	int a[10],b[10],n,i,s;
	float c[10],GPA;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=1;
	while(i<=n)
	{
		scanf("%d",&b[i]);
		if(b[i]>=90&&b[i]<=100)
			c[i]=4;
		else if(b[i]>=85)
			c[i]=3.7;
		else if(b[i]>=82)
			c[i]=3.3;
		else if(b[i]>=78)
			c[i]=3;
		else if(b[i]>=75)
			c[i]=2.7;
		else if(b[i]>=72)
			c[i]=2.3;
		else if(b[i]>=68)
			c[i]=2;
		else if(b[i]>=64)
			c[i]=1.5;
		else if(b[i]>=60)
			c[i]=1;
		else c[i]=0;
		i=i+1;
	}
	i=1;
	GPA=0;
	s=0;
	while(i<=n)
	{
		GPA=GPA+a[i]*c[i];
		s=s+a[i];
		i=i+1;
	}
	GPA=GPA/(float)s;
	printf("%.2f",GPA);
}
