
int main()
{
	int n,m;
	cin>>n>>m;
	int A[100];
	int B[100];
	for (int i=0;i<n-m;++i)
		cin>>A[i];
	for (int i=0;i<m;++i)
		cin>>B[i];
	for (int i=0;i<m;++i)
		cout<<B[i]<<" ";
	for (int i=0;i<n-m;++i)
	{
		if (i==n-m-1)
			cout<<A[i];
		else
		    cout<<A[i]<<" ";
	}
	return 0;
}
