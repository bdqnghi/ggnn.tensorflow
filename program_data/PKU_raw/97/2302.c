int main()
{
	int n;
	scanf("%d",&n);
	int a,b,c,d,e,f,g;
	a=n/100;
	if(n-(100*a)>50)
		b=1;
	else
		b=0;
	c=(n-100*a-50*b)/20;
	d=(n-100*a-50*b-20*c)/10;
	e=(n-100*a-50*b-20*c-10*d)/5;
	f=n-100*a-50*b-20*c-10*d-5*e;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
   return 0;
}