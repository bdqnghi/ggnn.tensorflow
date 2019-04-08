int main()
{
	int k,m,n,i,j,a[100][100],sum=0;     //????????????
	cin >> k;                            //???????
	while(cin >> m >> n)                 //???
	{
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin >> a[i][j];
		if(m>=3&&n>=3)
		{
			for(i=0;i<n;i++)             //???
				sum=sum+a[0][i]+a[m-1][i];
			for(i=1;i<m-1;i++)
				sum=sum+a[i][0]+a[i][n-1];
		}
		else
		{
			for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				sum =sum+a[i][j];
		}
		cout << sum << endl;             //???
		sum=0;
	}
	return 0;
}
