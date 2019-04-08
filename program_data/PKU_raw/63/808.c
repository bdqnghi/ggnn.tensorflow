int main()
{
 int i,j,k;
 int m,q;
 cin>>m>>q;
 int a[m][q];
 for(i=0;i<m;i++)
 {
  {
   for(j=0;j<q;j++)
   cin>>a[i][j];
  }
 }
 int n,p;
 cin>>n>>p;
 int b[n][p];
 for(i=0;i<n;i++)
 {
    {
     for(j=0;j<p;j++)
     cin>>b[i][j];
    }
 }
 int c[m][p];
  for(k=0;k<p;k++)
  {
      for(j=0;j<m;j++)
       {
        c[j][k]=0;
        for(i=0;i<q;i++)
        {
         c[j][k]=c[j][k]+a[j][i]*b[i][k];
        }
       }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<p-1;j++)
    {
     cout<<c[i][j]<<" ";
    }
      cout<<c[i][p-1];
      cout<<endl;
  }
    cin.get();cin.get();cin.get();
return 0;
}
