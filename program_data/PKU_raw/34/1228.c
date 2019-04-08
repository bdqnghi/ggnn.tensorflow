int main()
{
	int n,j;//?????n,j????n??
	cin>>n;
	while (n!=1)
	{
		if (n%2==1)
		{
			j=n;
			n=3*n+1;
			cout<<j<<"*3+1="<<n<<endl;
		}
		else if (n%2==0)
		{
			j=n;
			n=n/2;
			cout<<j<<"/2="<<n<<endl;
		}
	}
	cout<<"End"<<endl;
	cin.get();
	return 0;
}