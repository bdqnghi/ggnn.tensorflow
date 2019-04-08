int f(int n,int m)
{
	if(n==m)
		return n;
	else
	{
		if(n/2>m)
			return f(n/2,m);
		else
			return f(m,n/2);
	}
}
int main()
{
    int n,m;
	cin>>n>>m;
	if(n<m)
	{
			n = n^m;
			m = n^m;
			n = n^m;
	}
		
	cout<<f(n,m)<<endl;
    return 0;
}
