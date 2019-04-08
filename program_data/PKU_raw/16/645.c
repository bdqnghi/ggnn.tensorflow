int main()
{
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n%10;
	b=(n-a)%100/10;
	c=(n-(n%100))%1000/100;
	d=(n-(n%1000))%10000/1000;
	e=1;
	if (n<10)
	{printf("%d",n);}
	else
	{if (n<100)
	{printf("%d%d",a,b);}
	else
	{if (n<1000)
	{printf("%d%d%d",a,b,c);}
	else
	{if (n<10000)
	{printf("%d%d%d%d",a,b,c,d);}
	else
	{printf("abcde");}}}}
}