int apple(int n,int m)
{
	int i,p;
	if (m==1||n==1||n==0)
	{
		return 1;
	}
	else
	{
		p=0;
		if (n<m)
			return apple(n,n);	
		if (n>=m)
		{
			for (i=1;i<=m;i++)
				p=p+apple(n-i,i);
			return p;
		}
	}
}
int main()
{
	int i,t,n,m,num;
	cin>>t;
	for (i=0;i<t;i++)
	{
		cin>>n>>m;
		num=apple(n,m);
		cout<<num<<endl;
	}
	return 0;
}