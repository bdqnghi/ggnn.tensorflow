int main()
{
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	f=0;
	a=n/100;
	n=n%100;
	b=n/50;
	n=n%50;
    c=n/20;
	n=n%20;
	d=n/10;
	n=n%10;
	e=n/5;
	n=n%5;
         f=n;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}

	

