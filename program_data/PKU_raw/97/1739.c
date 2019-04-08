int main()
{
	int a=0,b=0,c=0,d=0,e=0,f=0;
	int x;
	cin>>x;
	a=x/100;
	b=(x%100)/50;
	c=(x%50)/20;
	d=(x-(a*100+b*50+c*20))/10;
	e=(x%10)/5;
	f=(x%5)/1;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	return 0;


}