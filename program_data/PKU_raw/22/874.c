int main()
{
	int a,b,c,d=0,m=0,n=0;
	scanf("%d",&a);
    if(scanf(",%d",&c)=='\n')
		printf("No");
	else
	{
	while(scanf(",%d",&b)!=0)
	{
		m=0;
		n=b;
		if(a!=b||a!=c||b!=c)
			d=1;
		if(m<=a)
			m=a;
		if(m<=b)
			m=b;
		if(m<=c)
			m=c;
		if(n>=a)
			n=a;
		if(n>=b)
			n=b;
		if(n>=c)
			n=c;
		if(a>n&&a<m)
			c=a;
		else {if(b>n&&b<m)
			c=b;
		else {if(c>n&&c<m)
			c=c;
		else
			c=n;}}
		a=m;
	}
	if(d==1)
	printf("%d",c);
	else
		printf("No");
	}
	return 0;
}

