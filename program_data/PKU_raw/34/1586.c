int main()
{
    int m,n;
	cin>>n;
	m=n;
	if(n==1)cout<<"End"<<endl;
    else
	{
	for(;m!=1;)
	{
		if(n%2==1)
		{
	    n=m*3+1;
        cout<<m<<"*3+1="<<n<<endl;
		m=n;
		}
		else 
		{n=m/2;
		cout<<m<<"/2="<<n<<endl;
		m=n;
		}
	}
	cout<<"End"<<endl;
	}
	return 0;
}