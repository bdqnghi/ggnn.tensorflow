int f(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		return(f(n-1)+f(n-2));
	}
}
int main()
{
	int n=0,a=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cout<<f(a)<<endl;
	}
	return 0;
}