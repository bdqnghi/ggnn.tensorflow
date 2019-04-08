//???? ??? 20121130

char B[102][102][102];
int n,m;

void ini()  //???
{
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
        cin>>B[i][j][0];
    }

}

void inf(int i,int j,int t)     //??
{
    if(B[i][j][t]=='@')
    {
        if(B[i+1][j][t]=='.') B[i+1][j][t+1]='@';
        if(B[i-1][j][t]=='.') B[i-1][j][t+1]='@';
        if(B[i][j+1][t]=='.') B[i][j+1][t+1]='@';
        if(B[i][j-1][t]=='.') B[i][j-1][t+1]='@';
    }
}

void ill(int t)
{
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        B[i][j][t+1]=B[i][j][t];
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        inf(i,j,t);
    if(t!=m) ill(t+1);
}

int stat(int t)
{
    int Amount=0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    if(B[i][j][t]=='@') Amount++;
    return Amount;
}

int main()
{
    cin>>n;
    ini();
    cin>>m;
    ill(0);
    cout<<stat(m-1);
    return 0;
}
