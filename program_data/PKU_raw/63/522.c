int main()
{
    int x[3],y[3],a[150][150],b[150][150],c[150][150],i=0,j=0,k=0;
    cin>>x[1]>>y[1];
    for(i=1;i<=x[1];i++)
    {
       for(j=1;j<=y[1];j++)
       {
          cin>>a[i][j];
       }
    }
    cin>>x[2]>>y[2];
    for(i=1;i<=x[2];i++)
    {
       for(j=1;j<=y[2];j++)
       {
          cin>>b[i][j];
       }
    }
    for(i=1;i<=x[1];i++)
    {
       for(j=1;j<=y[2];j++)
       {
          c[i][j]=0;
          for(k=1;k<=y[1];k++)
          {
             c[i][j]+=a[i][k]*b[k][j];
          }
       }
    }
    for(i=1;i<=x[1];i++)
    {
       for(j=1;j<y[2];j++)
       {
          cout<<c[i][j]<<" ";
       }
       cout<<c[i][y[2]]<<endl;
    }
    return 0;
}
