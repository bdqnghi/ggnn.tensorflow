int main()
{
    int num[6][6],max_hang[6],min_lie[6];
    memset(max_hang,0,sizeof(max_hang));
    memset(min_lie,1,sizeof(min_lie));
    int i,j;
    for(i=1;i<=5;i++)
    for(j=1;j<=5;j++)
    cin>>num[i][j];
    for(i=1;i<=5;i++)
    for(j=1;j<=5;j++)
    {
        if(num[i][j]>max_hang[i])max_hang[i]=num[i][j];
        if(num[i][j]<min_lie[j])min_lie[j]=num[i][j];
    }
    for(i=1;i<=5;i++)
    for(j=1;j<=5;j++)
    {
        if(num[i][j]==max_hang[i]&&num[i][j]==min_lie[j])
        {
            cout<<i<<' '<<j<<' '<<num[i][j]<<endl;
            return 0;
        }
    }
    cout<<"not found";
}
