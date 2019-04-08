int main()
{
	int n,x,biggest=0,bigger=0;
	cin>>n;
	while (n--)
	{
		cin>>x;
		if (x>biggest)
		{
			bigger=biggest;
			biggest=x;
		}
		else if (x>bigger)
			bigger=x;
	}
	cout<<biggest<<endl<<bigger<<endl;
	return 0;
}