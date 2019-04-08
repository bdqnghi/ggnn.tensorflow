int germ[10][10]={0};           //???????????
int m=0,n=0;
void work();
int main()
{
    cin>>m>>n;
    work();
    for(int i=1;i<10;i++)       //??
    {
        for(int j=1;j<9;j++)
            cout<<germ[i][j]<<' ';
        cout<<germ[i][9]<<endl;
    }
    return 0;
}
void work()
{
    germ[5][5]=m;
    int ngerm[10][10]={0};      //????????????
    for(int i=0;i<n;i++)
    {
        int j,k,p,q;
        for(j=1;j<=9;j++)
            for(k=1;k<=9;k++)  // ?????????
                {              // ????????
                    if(germ[j][k]!=0)
                    {
                        for(p=j-1;p<=j+1;p++)
                            for(q=k-1;q<=k+1;q++)
                                ngerm[p][q]+=germ[j][k];
                        ngerm[j][k]+=germ[j][k];
                    }
                }
        for(j=1;j<=9;j++)    //????????????
            for(k=1;k<=9;k++)//??????
            {
                germ[j][k]=ngerm[j][k];
                ngerm[j][k]=0;
            }
    }
}
