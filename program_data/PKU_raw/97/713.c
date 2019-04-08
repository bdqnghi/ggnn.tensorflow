int main ()
{
    int n,a,b,c,d,e,f,x;
	scanf("%d",&n);
	a=n/100;
	x=n%100;
	b=x/50;
	x=x%50;
	c=x/20;
    x=x%20;
	d=x/10;
	x=x%10;
	e=x/5;
	f=x%5;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	return 0;
}