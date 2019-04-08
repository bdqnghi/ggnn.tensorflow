
int main()
{
	int n;
	cin>>n;
	if(n==0)
	{
		cout<<n;
	}
	else
	{
		while (n)
		{
		cout<<n%10;
		n/=10;
		}
	}
	return 0;
}