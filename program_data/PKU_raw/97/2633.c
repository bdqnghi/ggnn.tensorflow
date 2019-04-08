int main()
{
	int n,a,b,c,d,e,f,a1,b1,c1,d1,e1,f1;
	cin>>n;
	a=n/100;
    a1=n%100;
	b=a1/50;
	b1=(n-a*100)%50;
	c=b1/20;
	c1=(n-b*50)%20;
	d=c1/10;
	d1=(n-c*20)%10;
	e=d1/5;
	e1=(n-d*10)%5;
	f=e1;
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl;
	cin.get();
	return 0;
}