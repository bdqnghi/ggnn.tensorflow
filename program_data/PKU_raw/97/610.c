int main()
{
	int n,a=0,b=0,c=0,d=0,e=0;
	scanf("%d",&n);
	a=n/100;
	printf("%d\n",a);
	n=n-100*a;
	b=n/50;
	printf("%d\n",b);
	n=n-50*b;
	c=n/20;
	printf("%d\n",c);
	n=n-20*c;
	d=n/10;
	printf("%d\n",d);
	n=n-10*d;
	e=n/5;
	printf("%d\n",e);
	n=n-5*e;
	printf("%d\n",n);
	return 0;
}
