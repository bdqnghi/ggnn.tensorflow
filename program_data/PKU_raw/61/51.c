int f(int);
int main()
{
	int n;
	cin >> n;
	for(int i=0; i < n; i++)
	{
		int a;
		cin>>a;
		cout<<f(a)<<endl;
	}
}
int f(int x)
{
	if(x==1)
	{
		return 1;
	}
	if(x == 2)
	{
		return 1;
	}
	return f(x-1)+f(x-2);
}