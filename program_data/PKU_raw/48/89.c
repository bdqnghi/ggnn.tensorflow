int num[11][11];
int num1[11][11];
int increase(int a,int time)
{
    if(a==time)  return 1;
    else
    {
        memset(num1,0,sizeof(num1));
        for(int i=0;i<11;i++)  
        {
                num[i][0]=num[i][10]=num[0][i]=num[i][10]=0;
        }
        for(int i=1;i<10;i++)
        {
                for(int j=1;j<10;j++)
                {
                        if(num[i][j]!=0)
                        {
                                        num1[i][j]=num1[i][j]+2*num[i][j];
                                        num1[i][j-1]=num1[i][j-1]+num[i][j];
                                        num1[i-1][j]=num1[i-1][j]+num[i][j];
                                        num1[i+1][j]=num1[i+1][j]+num[i][j];
                                        num1[i][j+1]=num1[i][j+1]+num[i][j];
                                        num1[i-1][j-1]=num1[i-1][j-1]+num[i][j];
                                        num1[i+1][j-1]=num1[i+1][j-1]+num[i][j];
                                        num1[i-1][j+1]=num1[i-1][j+1]+num[i][j];
                                        num1[i+1][j+1]=num1[i+1][j+1]+num[i][j];
                        }
                }
        }
        for(int i=0;i<11;i++)
        {
                for(int j=0;j<11;j++)
                {
                        num[i][j]=num1[i][j];
                }
        }
        return increase(a+1,time);
    }
}
int main()
{
    int n,t;
    cin>>n>>t;
    memset(num,0,sizeof(num));
    memset(num1,0,sizeof(num1));
    num[5][5]=n;
    num[5][5]=n;
    increase(0,t);
    for(int i=1;i<10;i++)
    {
            for(int j=1;j<9;j++)
            {
                    cout<<num1[i][j]<<' ';
            }
            cout<<num1[i][9]<<endl;
    }
    return 0;
}
