int main()
{
	int n,a,b,c;
	cin>>n;
	if(n<10)
		cout<<n;
	else if(n<100)
		cout<<n%10<<n/10;
	else if(n<1000)
		{
			a=n%10;
	  n=(n-a)/10;
	  b=n%10;
	  n=(n-b)/10;
	  cout<<a<<b<<n;
	}
	else if(n<10000)
	{	a=n%10;
	     n=(n-a)/10;
	  b=n%10;
	  n=(n-b)/10;
	  c=n%10;
	  n=(n-c)/10;
	  cout<<a<<b<<c<<n;}
	else 
		cout<<"0"<<"0"<<"0"<<"0"<<"1";
	return 0;
}