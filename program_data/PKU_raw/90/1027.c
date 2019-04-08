int account(int m,int n)
{
	if(m==0)return 1;
	if(n==1)return 1;
	if(m<n) return account(m,n-1);
	return account(m-n,n)+account(m,n-1);
}
int main()
{
	int t,m=0,n=0;
	cin>>t;
	while(t>0)
	{
		cin>>m>>n;
		cout<<account(m,n)<<endl;
t--;
	}
	return 0;
}
