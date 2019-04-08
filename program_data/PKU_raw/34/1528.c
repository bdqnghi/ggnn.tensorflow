int main()
{
	int n,m,k;
	cin>>n;
	while(n>1)
	{
		if(n%2==0)
		{
			cout<<n<<"/2="<<n/2<<endl;
			n=n/2;
		}
		else
		{
			cout<<n<<"*3+1="<<n*3+1<<endl;
			n=n*3+1;
		}
	}
	cout<<"End"<<endl;
	return (0);
}