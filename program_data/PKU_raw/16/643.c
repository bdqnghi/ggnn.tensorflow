int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a%10;
	c=(int)(a/10)%10;
	d=(int)(a/100)%10;
	e=(int)(a/1000)%10;
	if(a>=0&&a<10)
		printf("%d\n",a);
	else if(a>=10&&a<100)
		printf("%d%d\n",b,c);
	else if(a>=100&&a<1000)
		printf("%d%d%d\n",b,c,d);
	else
		printf("%d%d%d%d\n",b,c,d,e);
	return 0;
}