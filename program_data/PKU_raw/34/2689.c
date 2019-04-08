void a(int n)
{
	if(n==1)
	{
		cout<<"End"<<endl;
		return;
	}
	switch(n%2)
	{
	case 1:
		{
			cout<<n<<"*3+1="<<n*3+1<<endl;
			a(n*3+1);
			break;
		}
	case 0:
		{
			cout<<n<<"/2="<<n/2<<endl;
			a(n/2);
			break;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	a(n);
}