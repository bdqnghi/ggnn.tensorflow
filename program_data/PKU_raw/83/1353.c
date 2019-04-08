void main()

{
	int n,i,b;
	float	a[200],c,x=0,y=0,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		x+=a[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		if(b<=100&&b>=90)
		{c=4.0;}
		if(b<=89&&b>=85)
		{c=3.7;}
		if(b<=84&&b>=82)
		{c=3.3;}
		if(b<=81&&b>=78)
		{c=3.0;}
		if(b<=77&&b>=75)
		{c=2.7;}
		if(b<=74&&b>=72)
		{c=2.3;}
		if(b<=71&&b>=68)
		{c=2.0;}
		if(b<=67&&b>=64)
		{c=1.5;}
		if(b<=63&&b>=60)
		{c=1.0;}
		if(b<60)
		{c=0;}
		y=y+c*a[i];
	
	}

z=y/x;
printf("%.2f",z);

} 