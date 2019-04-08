int main()
{
	int n,m;
	cin>>n;
	if(n!=1)
	{do
	 {
	 if(n%2==0)
	   {m=n/2;
	 cout<<n<<"/2="<<m<<endl;
	 n=m;}
	 else
	{m=n*3+1;
	 cout<<n<<"*3+1="<<m<<endl;
	 n=m;}
	}
	while(n!=1);
	cout<<"End";
	}
	else 
		cout<<"End";
	cin.get();
	cin.get();
	return 0;
 }