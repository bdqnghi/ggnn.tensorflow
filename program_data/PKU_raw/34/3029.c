int main()
{
	int n,j,k;
	cin>>n;
	while(n!=1)//???????
	{
		if(n%2==0)
		{
			cout<<n<<"/2="<<n/2<<endl;
			n=n/2;
			if(n==1)
				break;
		}
		if(n%2!=0)
		{
			cout<<n<<"*3+1="<<n*3+1<<endl;
			n=n*3+1;
			if(n==1)
				break;
		}
	}
	cout<<"End";

		
	return 0;
}