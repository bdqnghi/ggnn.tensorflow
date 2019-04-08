int main()
{
    int m,n,i,j,juzhen[20][20];
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cin>>juzhen[i][j];
                                    cout<<endl;
                    }
    }//???? 
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    if(i==0&&j==0)
                                    {
                                                  if(juzhen[i][j]>=juzhen[i+1][j]&&juzhen[i][j]>=juzhen[i][j+1])
                                                  cout<<i<<" "<<j<<endl;
                                    }
                                    else if(i==0&&j==n-1)
                                    {
                                         if(juzhen[i][j]>=juzhen[i][j-1] && juzhen[i][j]>=juzhen[i+1][j])
                                         cout<<i<<" "<<j<<endl;
                                    }
                                    else if(i==m-1 && j==0)
                                    {
                                                  if(juzhen[i][j]>=juzhen[i-1][j]&&juzhen[i][j]>=juzhen[i][j+1])
                                                  cout<<i<<" "<<j<<endl;
                                    }
                                    else if(i==m-1&&j==n-1)
                                    {
                                         if(juzhen[i][j]>=juzhen[i][j-1] && juzhen[i][j]>=juzhen[i-1][j])
                                         cout<<i<<" "<<j<<endl;
                                    }//?????? 
                                    else if(i==0)
                                    {
                                         if(juzhen[i][j]>=juzhen[i][j-1] && juzhen[i][j]>=juzhen[i][j+1] && juzhen[i][j]>=juzhen[i+1][j])
                                         cout<<i<<" "<<j<<endl;  
                                    }
                                    else if(i==m-1)
                                    {
                                         if(juzhen[i][j]>=juzhen[i][j-1] && juzhen[i][j]>=juzhen[i][j+1] && juzhen[i][j]>=juzhen[i-1][j])
                                         cout<<i<<" "<<j<<endl;  
                                    }
                                    else if(j==0)
                                    {
                                         if(juzhen[i][j]>=juzhen[i][j+1] && juzhen[i][j]>=juzhen[i-1][j] && juzhen[i][j]>=juzhen[i+1][j])
                                         cout<<i<<" "<<j<<endl;
                                    }  
                                    else if(j==n-1)
                                    {
                                         if(juzhen[i][j]>=juzhen[i][j-1] && juzhen[i][j]>=juzhen[i-1][j] && juzhen[i][j]>=juzhen[i+1][j])
                                         cout<<i<<" "<<j<<endl;
                                    }//???? 
                                    else
                                    {
                                        if(juzhen[i][j]>=juzhen[i][j-1] &&juzhen[i][j]>=juzhen[i][j+1]&& juzhen[i][j]>=juzhen[i-1][j] && juzhen[i][j]>=juzhen[i+1][j])
                                         cout<<i<<" "<<j<<endl;
                                    }  //?????? 
                    }
    }
    cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();
return 0;
}