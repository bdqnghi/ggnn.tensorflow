int f(int , int );
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int i=0,m,n;
		int sum=0;
		cin>>m>>n;
		for(i=1;i<=n;i++)
			sum=sum+f(m,i);
		cout<<sum<<endl;
	}
	return 0;
}
int f(int n,int k)
{
	int j=0,r;
	if(k==1||n==k)
		return 1;
	else
		if(n<k)
			return 0;
		else
		{
			r=0;
			for(j=1;j<=k;j++)
				r=r+f(n-k,j);
			return r;
		}
}
