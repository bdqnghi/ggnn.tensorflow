int main()
{
	int n, a, b, c, d;
	cin>>n;
	a=n/1000;
	b=(n-1000*a)/100;
	c=(n-1000*a-b*100)/10;
	d=n-1000*a-b*100-c*10;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				cout<<d<<endl;
			}
			else
			{
				cout<<d<<c<<endl;
			}
		}
		else
		{
			cout<<d<<c<<b<<endl;
		}
	}
	else
	{
		cout<<d<<c<<b<<a<<endl;
	}
	return 0; 
}