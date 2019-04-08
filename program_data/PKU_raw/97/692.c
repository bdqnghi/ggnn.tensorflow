int main()
{
	int money;
	scanf("%d",&money);
	int a,b,c,d,e,f;
	a=money/100;
	b=money%100/50;
	c=money%50/20;
	d=(money%50-c*20)/10;
	e=money%10/5;
	f=money%10-e*5;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
}
