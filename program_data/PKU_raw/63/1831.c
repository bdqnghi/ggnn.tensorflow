int main()
{
    int a,b,m,n,c,d,i,j;
    cin>>m>>n;
    i=1;
    int v1[m+1][n+1];
    for(a=1;a<=m;a++)
    {
                     for(b=1;b<=n;b++)
                     {
                                      cin>>v1[a][b]; 
                     }
                     
    } 
    cin>>c>>d;
    int v2[c+1][d+1];
    for(a=1;a<=c;a++)
    {
                     for(b=1;b<=d;b++)
                     {
                                      cin>>v2[a][b]; 
                     }
    }
    int v3[m+1][d+1];
    for(int i=1;i<=m;i++)   
    {
                  for(int j=1;j<=d;j++) 
                  {  
                          v3[i][j]=0;
                          for(int b=1;b<=n;b++)         
                          v3[i][j]=v3[i][j]+v1[i][b]*v2[b][j];            
                  } 
    }     
    for(i=1;i<=m;i++)
    {
                     for(j=1;j<d;j++)
                     {
                                      cout<<v3[i][j]<<" ";
                     }
                     cout<<v3[i][d]<<endl;
    }
    return 0;
}