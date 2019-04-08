int main()
{
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
	a=(n-n%100)/100;
	b=(n%100-(n%100)%50)/50;
	c=(n%50-(n%50)%20)/20;
	d=((n-100*a-50*b-20*c)-(n-100*a-50*b-20*c)%10)/10;
	e=(n%10-(n%10)%5)/5;
	f=n-100*a-50*b-20*c-10*d-5*e;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}
