int main()
{
	int m=0,n=0,i=0,j=0;
	cin>>m>>n;
	int a[21][21],sign[21][21]={0};
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			int k=0,sum=0;
			if(i-1>=0)
			{
				k++;
				if(a[i][j]>=a[i-1][j])
					sum++;
			}
			if(i+1<m)
			{
				k++;
				if(a[i][j]>=a[i+1][j])
					sum++;
				
			}
			if(j-1>=0)
			{
				k++;
				if(a[i][j]>=a[i][j-1])
					sum++;
				
			}
			if(j+1<n)
			{
				k++;
				if(a[i][j]>=a[i][j+1])
					sum++;
				
			}
			
			if(sum==k)
				sign[i][j]=1;
			
		}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(sign[i][j]==1)
				cout<<i<<" "<<j<<endl;
		}
		return 0;
}