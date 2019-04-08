void main()
{
	int a,b,i,n,p=0;
	scanf("%d",&n);
	int x[10];
	float y[10],s=0,GPA;
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a);
	 x[i]=a;
	}
	    for(i=1;i<=n;i++)
		{	scanf("%d",&b);
	    if(b>=90)
			y[i]=4.0;
		else if(b>=85)
			y[i]=3.7;
			else if(b>82)
			y[i]=3.3;
			else if(b>=78)
			y[i]=3.0;
			else if(b>=75)
			y[i]=2.7;
			else if(b>=72)
			y[i]=2.3;
			else if(b>=68)
			y[i]=2.0;
			else if(b>=64)
			y[i]=1.5;
			else if(b>=60)
			y[i]=1.0;
			else y[i]=0;
		}
	for(i=1;i<=n;i++)
	{
	     s=s+y[i]*x[i];
         p=p+x[i];
	}
GPA=s/p;
printf("%.2f",GPA);
}