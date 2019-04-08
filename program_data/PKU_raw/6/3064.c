
int main()
{
	int i,k,col[N],row[N],a[100][N][N],c,r,sum[N];
	cin>>k;
	for(i=0;i<k;i++)
	{
	     sum[i]=0;
		cin>>col[i];
		cin>>row[i];
		
		for(c=0;c<col[i];c++)
		{
			for(r=0;r<row[i];r++)
			{
				cin>>a[i][c][r];
			}
		}
        
        for(c=0;c<row[i];c++)
			sum[i]=sum[i]+a[i][0][c]+a[i][col[i]-1][c];
		for(c=1;c<col[i]-1;c++)
			sum[i]=sum[i]+a[i][c][0]+a[i][c][row[i]-1];

		cout<<sum[i]<<endl;
		

	}
	

	return 0;
}
