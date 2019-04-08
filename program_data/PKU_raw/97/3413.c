int main()
{
	int x;
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d%d",&x,&a,&b,&c,&d,&e,&f);
	a=x/100;
	b=x%100/50;
	c=x%50/20;
	d=(x%50)%20/10;
	e=x%10/5;
	f=x%5;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	return 0;
}
