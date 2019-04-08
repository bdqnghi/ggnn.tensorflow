int main()
{
	int n;
	int a,b,c,d,e,f;
	int a1=0,b1=0,c1=0,d1=0,e1=0,f1=0;
	scanf("%d",&n);
	a=n/100;
	a1=n%100;
	b=a1/50;
	b1=a1%50;
	c=b1/20;
	c1=b1%20;
	d=c1/10;
	d1=c1%10;
	e=d1/5;
	e1=d1%5;
	f=e1;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
	}
