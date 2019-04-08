void main()
{
	double a[10];
	double b[10];
	double c[10];
	int n,i,j;
	double s1,s2,jd;
	s1=0;
	s2=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%lf ",&a[i-1]);
	for(j=1;j<=n;j++)
		scanf("%lf ",&b[j-1]);
	for(i=0;i<=n-1;i++)
	{
		if (b[i]>=90)
			c[i]=4.0;
		else if(b[i]>=85)
			c[i]=3.7;
		else if(b[i]>=82)
			c[i]=3.3;
		else if(b[i]>=78)
			c[i]=3.0;
		else if(b[i]>=75)
			c[i]=2.7;
		else if(b[i]>=72)
			c[i]=2.3;
		else if(b[i]>=68)
			c[i]=2.0;
		else if(b[i]>=64)
			c[i]=1.5;
		else if(b[i]>=60)
			c[i]=1.0;
		else
			c[i]=0.0;
	}
      for(i=0;i<=n-1;i++)
	  {
		  s1=s1+a[i];
		  s2=s2+a[i]*c[i];
	  }

      jd=s2/(double)(s1);
	  printf("%.2lf",jd);
}