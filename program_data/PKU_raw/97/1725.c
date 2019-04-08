int main()
{
	int n,a=0,b=0,c=0,d=0,e=0,f=0,n1,n2,n3,n4,n5;
	cin>>n;
	n1=n%100;
	a=(n-n1)/100;
	n2=n1%50;
	b=(n1-n2)/50;
	n3=n2%20;
	c=(n2-n3)/20;
	n4=n3%10;
	d=(n3-n4)/10;
	n5=n4%5;
	e=(n4-n5)/5;
	f=n5;
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl;
	return 0;
}