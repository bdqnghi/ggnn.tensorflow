int main()
{
    int n,i,j,m,sum=0;
    cin>>n;
for (int p=1;p<=n;p++)
{
    sum=0;
    int a[n+1][n+1];
    for (i=0;i<n;i++)
      for (j=0;j<n;j++)
         cin>>a[i][j];
    a[n][n]=a[0][0];
    for (i=1;i<n;i++)
        a[i][n]=a[i][0];
    for (j=1;j<n;j++)
        a[n][j]=a[0][j];
   for (int q=1;q<n;q++)
  {
    for (i=q;i<=n;i++)
       {
           m=a[i][q];
           for (j=q+1;j<=n;j++)
           {
               if (m>a[i][j])
                    m=a[i][j];
           }
           
           for (j=q;j<=n;j++)
               a[i][j]-=m;
       }
    for (j=q;j<=n;j++)
        {
             m=a[q][j];
             for (i=q+1;i<=n;i++)
             {
               if (m>a[i][j])
                    m=a[i][j];
             }
             
             for (i=q;i<=n;i++)
                a[i][j]-=m;
        } 
    sum+=a[q][q];
  }
    cout<<sum<<endl;
}
cin>>i;
return 0;
    
}
