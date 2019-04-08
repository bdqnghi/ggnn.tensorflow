int a[22][22],m,n;
int panduan(int i,int j)
{
    if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])return 1;
    return 0;
}
int main()
{
	int i,j;
	cin>>m>>n;
	for(i=0;i<22;i++)
		for(j=0;j<22;j++)
			a[i][j]=0;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++){
			cin>>a[i][j];
		}
	for(i=1;i<=m;i++)
			for(j=1;j<=n;j++){
			  if(panduan(i,j)!=0)
			  {
				  cout<<i-1<<" "<<j-1<<endl;
			  }
			}
   return 0;
}