int main()
{
	int a;
	scanf("%d",&a);
	if(a/10==0)
		printf("%d",a);
	else if(a/100==0)
	{
		int b=a/10;
		int c=a%10;
		printf("%d%d",c,b);
	}
	else if(a/1000==0)
	{
		int b=a/100;
		int c=a%100;
		int d=c/10;
		int e=c%10;
		printf("%d%d%d",e,d,b);
	}
	else if(a/10000==0)
	{
		int b=a/1000;
		int c=a%1000;
		int d=c/100;
		int e=c%100;
		int f=e/10;
		int g=e%10;
		printf("%d%d%d%d",g,f,d,b);
	}
	else
	{
		int b=a/10000;
		int c=a%10000;
		int d=c/1000;
		int e=c%1000;
		int f=e/100;
		int g=e%100;
		int h=g/10;
		int i=g%10;
		printf("%d%d%d%d%d\n",i,h,f,d,b);
	}
	return 0;
}