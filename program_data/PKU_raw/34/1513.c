int main()
{
	int n,k,sum=0;
	cin>>n;
	while(n!=1)
	{
		cout<<n;
		if(n%2)
		{
			cout<<"*3+1=";
			n=n*3+1;
		}
		else 
		{
			cout<<"/2=";
			n=n/2;
		}
		cout<<n<<endl;
	
	}
	cout<<"End";
	return 0;
}