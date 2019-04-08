void main()
{
	int a,b,c,d,f,g,h,n;
	scanf("%d",&n);
	for (h=6;h<=n;h+=2)
	{
	for(a=3;a<h;a+=2)
	{
		c=(int)sqrt(a);
		for(d=2;d<=c;d++)
		{
			if (a%d==0)
				break;
		}
		if (d<=c)
		{
			continue;
			a+=2;
		}
		b=h-a;
	    g=(int)sqrt(b);
	    for(f= 2;f<=g;f++)
		{
			if (b%f==0)
			break;
		}
	    if (f>g)
		{
		   printf("%d=%d+%d\n",h,a,b);
		   break;
		}
	}
	}
}
