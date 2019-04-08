int la(int n,int m )
{
	if (n==0)return 1;
	if (n==1)return 1;
	else 
	{
		int p;
		if (m>=n)
		{
			p = la(n,m-n)+la(n-1,m);
		}
		else
		{
			p = la(n-1,m);
		}
		return p;
	}
}

int main()
{
	int k;
	cin>>k;
	for (int i =1;i<=k;i++)
	{
		int n,m;
		cin>>m>>n;
		cout<<la(n,m)<<endl;
	}
}