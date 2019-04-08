int a[25][25];
int main()
{
	int m,n,i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)
	 for(j=0;j<n;j++)
		cin>>a[i][j];
	for(i=0;i<m;i++)
	 for(j=0;j<n;j++)
	  {
		if((i-1<0||a[i][j]>=a[i-1][j])&&
		(j-1<0||a[i][j]>=a[i][j-1])&&
		(i+1>=m||a[i][j]>=a[i+1][j])&&
		(j+1>=n||a[i][j]>=a[i][j+1]))
		 cout<<i<<' '<<j<<endl;
	  }
	return 0;
}