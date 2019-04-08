void main()
{
	int reverse(int num);
	int a,b,c,d,e,f;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	a=reverse(a);
	b=reverse(b);
	c=reverse(c);
	d=reverse(d);
	e=reverse(e);
	f=reverse(f);
	printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
}
    int reverse(int num)
	{
		int w=0,leap=0;
		if(num<0)
		{
			num=0-num;
			leap=1;
		}

		while(num>0)
		{
			w=num%10+10*w;
			num/=10;
		}
		if(leap==1)
		{
			w=0-w;
		}
		return(w);
	}