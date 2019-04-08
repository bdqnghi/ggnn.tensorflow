int main()
{
    int juzhen[11][11],zhi[11][11];//??? 
    int chu,day,i,j,n;//chu?????day????? 
    cin>>chu>>day;
    for(i=0;i<11;i++)
      for(j=0;j<11;j++) juzhen[i][j]=0;
    juzhen[5][5]=chu;//??????????
    for(n=0;n<day;n++)
    {
                      for(i=1;i<10;i++)
                      {
                                      for(j=1;j<10;j++)
                                      {
                                                      zhi[i][j]=2*juzhen[i][j]+juzhen[i][j-1]+juzhen[i][j+1]+
                                                      juzhen[i-1][j-1]+juzhen[i-1][j]+juzhen[i-1][j+1]+juzhen[i+1][j-1]+
                                                      juzhen[i+1][j]+juzhen[i+1][j+1];//????? 
                                      }
                      }
                      for(i=1;i<10;i++)
                        for(j=1;j<10;j++) juzhen[i][j]=zhi[i][j];
    }
    for(i=1;i<10;i++)
    {
                    for(j=1;j<10;j++)
                    {
                                    if (j==9) cout<<juzhen[i][j]<<endl;//???? 
                                    else cout<<juzhen[i][j]<<" ";
                    }
    }
    return 0;
}
