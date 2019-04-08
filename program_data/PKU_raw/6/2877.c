//*************************************************
//?????????????                      * 
//?????                                      *
//???2013/11/3                                 *
//???????????????                  *
//*************************************************
int main()
{
	int a,n,m;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		int sum=0;
		cin>>m>>n;
        int A[100][100]={0};
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<n;k++)
			{
				cin>>A[j][k];
			}
		}
		if(m==1&&n==1)
			cout<<A[0][0]<<endl;
		else
		{
			for(int j=0;j<m;j++)
			sum=sum+A[j][0]+A[j][n-1];
		for(int j=0;j<n;j++)
			sum=sum+A[0][j]+A[m-1][j];
			sum=sum-A[0][0]-A[0][n-1]-A[m-1][n-1]-A[m-1][0];
			cout<<sum<<endl;
		}
	}
	return 0;
}