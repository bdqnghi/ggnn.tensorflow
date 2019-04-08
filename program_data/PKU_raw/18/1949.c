
int juzhen[100][100];
int m,n,sum,j,min001=0,min002=0;
int min01[101],min02[101];
int min1(int a)//?????????? 
{
    for(int p=0;p<m;p++)
    min01[p]=juzhen[a][p];
    sort(min01,min01+m);
    return min01[0];
}
int min2(int a)//?????????? 
{
    for(int p=0;p<m;p++)
    min02[p]=juzhen[p][a];
    sort(min02,min02+m);
    return min02[0];
}
void jia(int x,int y)
{
    if(y==1)
    cout<<sum<<endl;
    else
    {
      for(j=0;j<y;j++)
      {
        min001=min1(j);
        for(int k=0;k<y;k++)
        juzhen[j][k]=juzhen[j][k]-min001;//???????? 
      }
      for(j=0;j<y;j++)
      {
        min002=min2(j);
        for(int k=0;k<y;k++)
        juzhen[k][j]=juzhen[k][j]-min002;//???????? 
      }
      sum=sum+juzhen[1][1];
      for(j=1;j<y-1;j++)
      {
        for(int k=0;k<y;k++)
        juzhen[j][k]=juzhen[j+1][k];//????? 
      }
      for(j=1;j<y;j++)
      {
        for(int k=0;k<y-1;k++)
        juzhen[k][j]=juzhen[k][j+1];//????? 
      }
      m=m-1;
      jia(x,y-1);
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      sum=0;
      m=n;
      for(j=0;j<n;j++)
      {
        for(int k=0;k<n;k++)
        cin>>juzhen[j][k];
      }
      jia(i,m);//???? 
    }
    return 0;
}
