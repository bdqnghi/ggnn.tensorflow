int main()
{
	int n,a,b,c,d,e,f;
	cin>>n;
	if(n<10)
		cout<<n;
	else if(n<100)
		{a=n%10;
		b=n/10;
		cout<<a<<b;}
	else if(n<1000)
	{a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	cout<<a<<c<<d;}
	else if(n<10000)
	{a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	e=d%10;
	f=d/10;
	cout<<a<<c<<e<<f;}
	else if(n==10000)
		cout<<00001;
	return 0;
}