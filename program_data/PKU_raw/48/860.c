int main()
{
    int a[10][11][11]={0},i,j,k,m,n;
    cin>>m>>n;
    a[0][5][5]=m;
    for(k=1;k<=n;k++)
    {
                    for(i=1;i<10;i++)
                    for(j=1;j<10;j++)
                    {
                                     if(a[k-1][i][j]>0)
                                     {
                                                       a[k][i][j]=a[k][i][j]+a[k-1][i][j]*2;
                                                       a[k][i-1][j]=a[k][i-1][j]+a[k-1][i][j];
                                                       a[k][i][j-1]=a[k][i][j-1]+a[k-1][i][j];
                                                       a[k][i+1][j]=a[k][i+1][j]+a[k-1][i][j];
                                                       a[k][i][j+1]=a[k][i][j+1]+a[k-1][i][j];
                                                       a[k][i+1][j+1]=a[k][i+1][j+1]+a[k-1][i][j];
                                                       a[k][i-1][j-1]=a[k][i-1][j-1]+a[k-1][i][j];
                                                       a[k][i-1][j+1]=a[k][i-1][j+1]+a[k-1][i][j];
                                                       a[k][i+1][j-1]=a[k][i+1][j-1]+a[k-1][i][j];
                                     }
                                     
                    }
    }
    for(i=1;i<10;i++)
    {
                   for(j=1;j<9;j++)
                   cout<<a[n][i][j]<<" ";
cout<<a[n][i][9];
                   cout<<endl;
     }
     return 0;
     }
                                    
                    
    
    
     
