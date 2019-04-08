int main()
{
	int k,m,n,i,j,p=0,num[100][100],sum=0;
	cin >>k;
	while(p<k)
	{
		cin >>m>>n;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				cin >>num[i][j];
			}
		for(j=0;j<n;j++)
			sum+=num[0][j];
		for(i=1;i<m-1;i++)
		{
			sum+=num[i][0];
			sum+=num[i][n-1];
		}
		for(j=0;j<n;j++)
			sum+=num[m-1][j];
		cout <<sum<<endl;
		sum=0;
		p++;
	}
	return 0;
}
