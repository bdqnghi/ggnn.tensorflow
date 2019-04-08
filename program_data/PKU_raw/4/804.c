int main()
{
	int m,n;
	int a[100][100];
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>*(*(a+i)+j);
	for(int i=0;i<m+n-1;i++)
		for(int j=n-1;j>=0;j--)
		{
			if(i-j<m&&i-j>=0)
				cout<<*(*(a+i-j)+j)<<endl;
		}
	return 0;
}