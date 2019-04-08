
int main()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"End"<<endl;
		return 0;
	}
	while(true)
	{
		if(n%2==0)
		{
			cout<<n<<"/2="<<n/2<<endl;
			n=n/2;
			if(n==1)
			{
				break;
			}
		}
		else
		{
			cout<<n<<"*3+1="<<((n*3)+1)<<endl;
			n=n*3+1;
			if(n==1)
			{
				break;
			}
		}
	}
	cout<<"End"<<endl;
	return 0;
}