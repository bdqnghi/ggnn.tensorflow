void main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	b=a%100;
	b=(a-b)/100;a=a-100*b;printf("%d\n",b);
	c=a%50;
	c=(a-c)/50;a=a-50*c;printf("%d\n",c);
	d=a%20;
	d=(a-d)/20;a=a-20*d;printf("%d\n",d);
	e=a%10;
	e=(a-e)/10;a=a-10*e;printf("%d\n",e);
	f=a%5;
	f=(a-f)/5;a=a-5*f;printf("%d\n",f);
	printf("%d\n",a);
}
