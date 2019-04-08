int main()
{
	int n;
	cin>>n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		if (i%7==0||(i>=70&&i<=79)||(i%10==7))
		{
		} 
		else
		{
			sum = sum + i * i;
		}
	}
	cout<<sum<<endl;
	return 0;
}