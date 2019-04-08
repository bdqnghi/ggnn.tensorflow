int main()
{
    char f[3];
    cin>>f;
    int n,m,x,z=0,v=1;
    m=f[0]-'0';
    n=f[2]-'0';
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        int max=a[i][0];
        x=0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                x=j;
            }
        }

        for(int j=0;j<n;j++)
        {
            if(max==a[i][j]&&x!=j)
            {
                v=0;
                break;
            }
        }
        if(v==0)
        {
            v=1;
            continue;
        }

        int min=a[0][x];
        for(int j=1;j<m;j++)
        {
            if(min>a[j][x])
            {
                min=a[j][x];
            }
        }
        if(max==min)
        {
            cout<<i<<"+"<<x<<endl;
            z=1;
            break;
        }
    }
    if(z==0)
    cout<<"No"<<endl;

    return 0;
}
