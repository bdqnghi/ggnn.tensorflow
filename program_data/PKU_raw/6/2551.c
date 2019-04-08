int main()
{
	int k,m,n,a[105][105],(*p)[105]=NULL,sum;
	cin>>k;
	for(int time=1;time<=k;time++)
	{
		sum=0;
		p=a;
		cin>>m>>n;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			sum=sum+*(*p+i)+*(*(p+m-1)+i);
		}
		for(int i=1;i<m-1;i++)
		{
			sum=sum+*(*(p+i))+*(*(p+i)+n-1);
		}
		if((m==1)||(n==1))
		sum=sum/2;
		cout<<sum<<endl;
	}
	
	return 0;
}
