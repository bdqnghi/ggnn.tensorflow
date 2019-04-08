int main()
{
	int n,k,m,j;
	cin>>n>>k;
	for(int i=1;;i++)
	{
		m=i*n+k;
		for(j=1;j<n;j++)
		{
			if(m%(n-1)==0)
			m=m*n/(n-1)+k;
			else
			break;
		}
		if(j==n)
		break;
	}
	cout<<m;
	
	return 0;
}
