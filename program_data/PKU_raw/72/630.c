int h[21][21];
int main()
{
	int i=1,j=1,m=0,n=0;
  cin>>m>>n;
  for (i=1;i<=m;i++)
  {
     for (j=1;j<=n;j++)
	 {
		 cin>>h[i][j];
	 }
  }
  i=j=1;
  for (i=1;i<=m;i++)
  {
     for (j=1;j<=n;j++)
	 {
		 if ((h[i][j]>=h[i-1][j])&&(h[i][j]>=h[i+1][j])&&(h[i][j]>=h[i][j-1])&&(h[i][j]>=h[i][j+1]))
			 cout<<i-1<<" "<<j-1<<endl;
	 }
  }
  return 0;
}