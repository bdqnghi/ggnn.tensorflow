int main()
{
	int n=0,a[110][110];
     int sum=0;
	cin>>n;
	int i=0,j=0,k=0;
	for(k=0;k<n;k++)
	{
		sum=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<n-1;i++)
	{
		int mi=9999999;
	for(j=0;j<n-i;j++)
	{
	mi=9999999;
	for(int m=0;m<n-i;m++)
		if(a[j][m]<mi)
			mi=a[j][m];
	for(int m=0;m<n-i;m++)
		a[j][m]-=mi;
	}
	for(j=0;j<n-i;j++)
	{
	mi=9999999;
	for(int m=0;m<n-i;m++)
		if(a[m][j]<mi)
			mi=a[m][j];
	for(int m=0;m<n-i;m++)
		a[m][j]-=mi;
	}
	sum+=a[1][1];
	for(j=1;j<n-i-1;j++)
		a[0][j]=a[0][j+1];
	for(j=1;j<n-i-1;j++)
	{
     a[j][0]=a[j+1][0];
	 for(int m=1;m<n-i-1;m++)
		 a[j][m]=a[j+1][m+1];
	}
	}
	cout<<sum<<endl;
	}
	return 0;
}