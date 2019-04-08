void jg(int n)
{
	int m;
	if(n!=1)
	{
		if(n%2==1)
		{
			m=3*n+1;
		cout<<n<<"*"<<3<<"+1="<<m<<endl;
		n=m;
		jg(n);
		}
		else
		{
			m=n/2;
			cout<<n<<"/2="<<m<<endl;
			n=m;
			jg(n);
		}
	}
	else
		cout<<"End"<<endl;
}

 
int main()
{
	int n;
	cin>>n;
	jg(n);
	return 0;
}