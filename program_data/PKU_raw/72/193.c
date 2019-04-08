//???  ??? 1000010334 
int main()
{
    int m=0;  //?? ?? 
    int n=0;  //??  ?? 
    cin>>m;
    cin>>n;
    int h[22][22];  //???? 
    for(int i=0;i<22;i++)   //???????????0 
    {
      h[0][i]=0;
      h[i][0]=0;
      h[i][n+1]=0;
      h[m+1][i]=0;
    }
    
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>h[i][j];
        }
    }
    //????? 
    for(int i=1;i<=m;i++)  //????? 
    {
       for(int j=1;j<=n;j++)
       {
          if(h[i][j]>=h[i-1][j]&&h[i][j]>=h[i+1][j]&&h[i][j]>=h[i][j-1]&&h[i][j]>=h[i][j+1])
          {
             cout<<i-1<<" "<<j-1<<endl;
          }
       }
    }
    
    
    return 0;
}
