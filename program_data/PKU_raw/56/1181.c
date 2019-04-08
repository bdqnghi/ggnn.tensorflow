
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,c,d,e;
	a=n%10;
	b=(n%100-n%10)/10;
	c=(n%1000-n%100)/100;
	d=(n%10000-n%1000)/1000;
	e=(n%100000-n%10000)/10000;
	if(a==0)
	{
		printf("0\n");
	}
    else if(a!=0&&b==0)
	{
		printf("%d\n",a);

	}
	else if(a!=0&&b!=0&&c==0)
	{
		printf("%d",a*10+b);
	}
	else if(a!=0&&b!=0&&c!=0&&d==0)
	{
		printf("%d",a*100+b*10+c);
	}
	else if(a!=0&&b!=0&&c!=0&&d!=0&&e==0)
	{
		printf("%d",a*1000+b*100+c*10+d);
	}
	else
	{
		printf("%d",a*10000+b*1000+c*100+d*10+e);
	}
	return 0;
}

