int  f(int n)
{
	if (n==0) 
	{
		cout <<n<<endl;
		return 0;
	}
	if (n<0) 
	{
		cout <<'-';
		return f(-n);
	}
	cout <<n%10;
	if (n/10!=0)
		return f(n/10);
	else cout<<endl;
}
int main()
{
	int n;
	while(cin>>n)
	{
		while (n%10==0&&n!=0)
		{
			n/=10;
		}
		f(n);
	}
	return 0;
}