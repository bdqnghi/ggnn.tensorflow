int main()
{
	int n,a,b,c,d,e,f;
	int A,B,C,D,E;
	cin>>n;
	a=n/100;
	A=n%100;
	b=A/50;
	B=A%50;
	c=B/20;
	C=B%20;
	d=C/10;
	D=C%10;
	e=D/5;
	E=D%5;
	f=E;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	return 0;
}