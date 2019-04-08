void main()
{
	int reverse(int num);
	int a[6],i,c[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		c[i]=reverse(a[i]);
		printf("%d\n",c[i]);
	}
}
int reverse(int num)
{
	int z,a,b,c,d,e;
	if(num>=0)
		a=num/10000;b=num/1000-10*a;c=num/100-100*a-10*b;d=num/10-1000*a-100*b-10*c;e=num-10000*a-1000*b-100*c-10*d;
		if(a>0)
			z=10000*e+1000*d+100*c+10*b+a;
		if(a==0&&b>0)
			z=1000*e+100*d+10*c+b;
		if(a==0&&b==0&&c>0)
			z=100*e+10*d+c;
		if(a==0&&b==0&&c==0&&d>0)
			z=10*e+d;
		if(a==0&&b==0&&c==0&&d==0&&e>0)
			z=e;
		if(a==0&&b==0&&c==0&&d==0&&e==0)
			z=0;
	if(num<0)
		a=(-num)/10000;b=(-num)/1000-10*a;c=(-num)/100-100*a-10*b;d=(-num)/10-1000*a-100*b-10*c;e=(-num)-10000*a-1000*b-100*c-10*d;
		if(a>0)
			z=-(10000*e+1000*d+100*c+10*b+a);
		if(a==0&&b>0)
			z=-(1000*e+100*d+10*c+b);
		if(a==0&&b==0&&c>0)
			z=-(100*e+10*d+c);
		if(a==0&&b==0&&c==0&&d>0)
			z=-(10*e+d);
		if(a==0&&b==0&&c==0&&d==0&&e>0)
			z=-e;		
	return(z);
}