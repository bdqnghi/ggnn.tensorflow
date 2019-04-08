void main()
{
	int a[10],b[10],n,i=1;
	float jidian,GPA,c[10];
    float y=0,x=0;
		scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		if((90<=a[i])&&(a[i]<=100))
		{jidian=4.0;}
		if((85<=a[i])&&(a[i]<=89))
		{jidian=3.7;}
		if((82<=a[i])&&(a[i]<=84))
		{jidian=3.3;}
		if((78<=a[i])&&(a[i]<=81))
		{jidian=3.0;}
		if((75<=a[i])&&(a[i]<=77))
		{jidian=2.7;}
		if((72<=a[i])&&(a[i]<=74))
		{jidian=2.3;}
		if((68<=a[i])&&(a[i]<=71))
		{jidian=2.0;}
		if((64<=a[i])&&(a[i]<=67))
		{jidian=1.5;}
		if((60<=a[i])&&(a[i]<=63))
		{jidian=1.0;}
		if(a[i]<60)
		{jidian=0;}
		c[i]=jidian*b[i];
	}
	for(i=1;i<=n;i++)
	{
		x=x+c[i];
	    y=y+b[i];
	}
	GPA=x/y;
	printf("%.2f\n",GPA);
}

