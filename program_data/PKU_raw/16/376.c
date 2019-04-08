int main()
{
	int a;
	int b,c,d,e;
	scanf("%d",&a);
	b=a/1000;
	c=a%1000;
	d=c%100;
	e=d%10;
	c=c/100;
	d=d/10;
	printf("%d",e);
	if(d!=0,(b+c+d)!=0)
		printf("%d",d);
	if(c!=0,(b+c)!=0)
		printf("%d",c);
	if(b!=0)
		printf("%d",b);
}
