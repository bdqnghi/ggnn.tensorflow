int map[2][12][12];
void Make(int,int,int);
int main()
{
    int i,j;
    int m,n,turn=0;
    memset(map,0,sizeof(map));
    map[0][5][5]=1;
    map[1][5][5]=1;
    cin>>m>>n;
    for(;n>0;--n)
    {
        turn=1-turn;
        for(i=0;i<12;++i)
        {
            for(j=0;j<12;++j)
            {
                map[1-turn][i][j]=0;
            }
        }
        for(i=1;i<=9;++i)
        {
            for(j=1;j<=9;++j)
            {
                Make(i,j,turn);
            }
        }
    }
    for(i=1;i<=9;++i)
    {
        cout<<map[1-turn][i][1]*m;
        for(j=2;j<=9;++j)
        {
            cout<<" "<<map[1-turn][i][j]*m;
        }
        cout<<endl;
    }
    return 0;
}
void Make(int x,int y,int t)
{
     int n=map[t][x][y];
     map[1-t][x][y]+=n*2;
     map[1-t][x-1][y]+=n;
     map[1-t][x+1][y]+=n;
     map[1-t][x][y-1]+=n;
     map[1-t][x][y+1]+=n;
     map[1-t][x-1][y-1]+=n;
     map[1-t][x-1][y+1]+=n;
     map[1-t][x+1][y-1]+=n;
     map[1-t][x+1][y+1]+=n;
     return;
}
     
     
     
        
