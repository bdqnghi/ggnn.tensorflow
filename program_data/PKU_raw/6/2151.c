int main()
{
	int i,j,n,m,k,sum;
	int a[100][100];
	cin >> k;
	while(k>0)
	{
		sum=0;
		k--;
		cin>>m>>n;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin >> *(*(a+i)+j);
		for(j=0;j<n;j++)
		{
			if(m==1)
				sum+=*(*a+j);
			else
			    sum+=*(*a+j)+*(*(a+m-1)+j);
		}
		for(i=1;i<m-1;i++)
			sum+=a[i][0]+a[i][n-1];
		cout << sum << endl;
	}
	return 0;
}