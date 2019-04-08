int apple(int m,int n)
{
	int s=0;
	
	if(n==1)
	{
		s=1;
	}else if(m<0)
	{
		s=0;
	}else if(n>=2&&m>=0)
	{
		s=apple(m,n-1)+apple(m-n,n);
	}
	return s;
}
int main()
{
	int t,i,M,N,q;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>M;
		cin>>N;
		cout<<apple(M,N)<<endl;
	}
	cin>>q;
	return 0;
}