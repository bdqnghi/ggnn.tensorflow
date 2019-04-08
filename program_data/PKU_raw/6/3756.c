int main()
{
	int k,m,n;
	int sum=0;
	cin>>k;
	int a[100][100];
	for(int i=0;i<k;i++)
	{   sum=0;
		cin>>m>>n;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		if(m!=1&&n!=1)
		{
		  for(int i=0;i<n;i++)
			sum+=*(*a+i)+*(*(a+m-1)+i);
		  for(int i=1;i<m-1;i++)
			sum+=*(*(a+i))+*(*(a+i)+n-1);
		  cout<<sum<<endl;
		}
		else cout<<**a<<endl;
	}
	return 0;
}