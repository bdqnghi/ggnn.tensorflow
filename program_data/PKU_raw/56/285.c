main(int)
{
	int n,m,a,b;
	scanf("%d",&n);
	a=n;
	m=0;
	while(a!=0)
	{	b=a%10;a=a/10;
		m=m*10+b;}
		printf("%d",m);
}