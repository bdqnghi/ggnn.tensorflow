int main()
{
	int k;
	int m,n,i,j,l,sum1=0,sum=0;
	int a[100][100];
	
	cin>>k;
	for(l=1;l<=k;l++)
	{
		cin>>m>>n;
		int (*p)[100];
		p=a;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
		{
			cin>>*(*(p+i)+j);
			sum=sum+*(*(p+i)+j);
		}
		for(i=1;i<m-1;i++)
			for(j=1;j<n-1;j++)
			{
				sum1=sum1+*(*(p+i)+j);
			}

        sum=sum-sum1;
		cout<<sum<<endl;
		sum=sum1=0;
	}
}