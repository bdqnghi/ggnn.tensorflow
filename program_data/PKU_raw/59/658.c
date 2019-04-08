int main()
{
    int n,m,a[100][100]={0},b[100][100]={0},c[100][100]={0},count=0,i,j,k,l,p;
    char d;
    cin>>n;
    for (i=0;i<n;i++)
       for(j=0;j<n;j++)
       {
                       cin>>d;
                       if (d=='#') b[i][j]=1;
                       if (d=='@') a[i][j]=1;
       }
    cin>>m;
    for (i=0;i<m-1;i++)
    {
        for(j=0;j<n;j++)
        {
                        for(k=0;k<n;k++)
                        {
                                        if (a[j][k]==1&&j-1>=0&&b[j-1][k]==0) c[j-1][k]=1;
                                        if (a[j][k]==1&&k-1>=0&&b[j][k-1]==0) c[j][k-1]=1;
                                        if (a[j][k]==1&&j+1<n&&b[j+1][k]==0) c[j+1][k]=1;
                                        if (a[j][k]==1&&k+1<n&&b[j][k+1]==0) c[j][k+1]=1;
                        }
                        
        }
        for(l=0;l<n;l++)
           for(p=0;p<n;p++)
              if(c[l][p]==1)
              {
                            c[l][p]=0;
                            a[l][p]=1;
              }    
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                 if(a[i][j]==1) count++;
        }
    }
    cout<<count;       
    return 0;
}
