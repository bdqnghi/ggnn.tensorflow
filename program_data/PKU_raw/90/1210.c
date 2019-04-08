int apple(int ,int );
int main()
{
	int t,i,m,n,a;
	cin>>t;
	for(i=1;i<=t;i++)
		{
			cin>>m>>n;
			a=apple(m,n);
			cout<<a<<endl;
	}
	return 0;
}
int apple(int m,int n)
{
	int a;
	if(m==1||m==0||n==1)
	{
		a=1;
	}
	else 
		{
			if(m>=n)
	{
		a=apple(m-n,n)+apple(m,n-1);
	}
	if(m<n)
	{
		a=apple(m,n-1);
	}
	}
	return a;
}