char temp='@';
int main()
{
    int n,m;
    char map[100][100];
    cin>>n;
    cin.get();
    int i,j,k;
    int x[4]={0,0,1,-1},y[4]={1,-1,0,0};
    for(i=0;i<n;i++)
    {
        cin.getline(map[i],100);
    }
    cin>>m;
    do
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(map[i][j]==temp)
                {
                    for(k=0;k<4;k++)
                    {
                        if(i+x[k]>=0&&i+x[k]<n&&j+y[k]>=0&&j+y[k]<n&&map[i+x[k]][j+y[k]]=='.')
                        {
                            map[i+x[k]][j+y[k]]=temp+1;
                        }
                    }
                }
            }
        }
        temp=temp+1;
        m--;
    }
    while(m>1);
    int sign=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(map[i][j]>='@')
            {
                sign=sign+1;
            }
        }
    }
    cout<<sign<<endl;
    return 0;
}
