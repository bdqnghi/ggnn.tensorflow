int main()
{
	int n,a=0,b=0;
	cin>>n;
	if(n==1)
		cout<<"End"<<endl;
	else
	{
		while(n!=1)
		{
			if(n%2!=0)
			{
				cout<<n<<"*3+1=";
				n=n*3+1;
				cout<<n<<endl;
			}
			else
			{
				cout<<n<<"/2=";
				n=n/2;
				cout<<n<<endl;
			}
		}
		cout<<"End"<<endl;
	}
		return 0;
}

