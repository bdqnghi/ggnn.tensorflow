int main()
{
	int n,k,apple,m,i;
	cin>>n>>k;
	apple=k;
	do
	{
		apple+=n;
		m=apple;
		for(i=n-1;i>=1;i--)
			if(m%(n-1)==0)
				m=m*n/(n-1)+k;
			else
				break;
	}
	while(i>=1);
	cout<<m;
	return 0;
}