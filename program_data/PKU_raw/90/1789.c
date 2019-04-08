int function(int m,int n)
{
	if(m<0||n==0)
		return 0;
	if(m==1||n==1||m==0)
		return 1;
	else
		return (function(m-n,n)+function(m,n-1));
}
int main()
{
	int t,m,n,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>m>>n;
		cout<<function(m,n)<<endl;
	}
}