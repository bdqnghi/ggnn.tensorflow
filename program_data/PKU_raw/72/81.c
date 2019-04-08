int main()
{
    int n,m,i,j,k,a[22][22];
    float avg;
    cin>>m>>n;
    for(i=0;i<22;i++)
    {
         for(j=0;j<22;j++)
         {
              a[i][j]=0;
         }
    }
    for(i=1;i<=m;i++)
    {
         for(j=1;j<=n;j++)
         {
              cin>>a[i][j];
         }
    }
    for(i=1;i<=m;i++)
    {
         for(j=1;j<=n;j++)
         {
              if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
              {
                   cout<<i-1<<" "<<j-1<<endl;
              }
         }
    }
    cin>>n;
    return 0;
} 
