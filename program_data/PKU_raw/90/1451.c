int work(int m,int n)
{
	if(m==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else if(m>=n)
	{
		return work(m-n,n)+work(m,n-1);
	}
	else
	{
		return work(m,n-1);
	}
}
int main()
{
	int t,m,n,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>m>>n;
		cout<<work(m,n)<<endl;;
	}
	return 0;
}