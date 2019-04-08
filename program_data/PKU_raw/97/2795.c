int main()
{
	int m,a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%d",&m);
	while(m>=100)
	{
		m=m-100;
		a++;
	}
	while(m>=50)
	{
		m=m-50;
		b=1;
	}
	while(m>=20)
	{
		m=m-20;
		c++;
	}
	while(m>=10)
	{
		m=m-10;
		d=1;
	}
	while(m>=5)
	{
		m=m-5;
		e=1;
	}
	while(m>=1)
	{
		m=m-1;
		f++;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}