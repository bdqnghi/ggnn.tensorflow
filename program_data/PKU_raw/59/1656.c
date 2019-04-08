

int main()
{
    int n,i , j ,m ,time,num;
    char a[100][100];
    char b[100][100];
    num =0;
    cin>> n;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> m;
    for (time=1;time<m;time++)
    {


        for(i =1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if (a[i][j]=='@')
                {
                    if (a[i-1][j]!='#')
                    {
                        b[i-1][j]='@';
                    }
                    if (a[i+1][j]!='#')
                    {
                        b[i+1][j]='@';
                    }
                    if (a[i][j-1]!='#')
                    {
                        b[i][j-1]='@';
                    }
                    if (a[i][j+1]!='#')
                    {
                        b[i][j+1]='@';
                    }
                    b[i][j]='@';
                }
                if (a[i][j]=='#')
                {
                    b[i][j]='#';
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                a[i][j]=b[i][j];
            }
        }

    }
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (a[i][j]=='@')
            num++;
        }
    }
    cout << num << endl;
    return 0;
}


