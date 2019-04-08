
int main()
{
    int n, i, j, k, m, num = 0;
    char a[102][102] = {0};
    cin >> n;
    for(i = 1;i <= n;i++)
    {
        for(j = 1;j <= n;j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> m;
    for(i = 1;i < m;i++)
    {
        for(j = 1;j <= n;j++)
        {
            for(k = 1;k <= n;k++)
            {
                if(a[j][k] == '@')
                {
                    if(a[j - 1][k] == '.')
                    {
                        a[j - 1][k] = 'a';
                    }
                    if(a[j + 1][k] == '.')
                    {
                        a[j + 1][k] = 'a';
                    }
                    if(a[j][k + 1] == '.')
                    {
                        a[j][k + 1] = 'a';
                    }
                    if(a[j][k - 1] == '.')
                    {
                        a[j][k - 1] = 'a';
                    }
                }
            }
        }
        for(j = 1;j <= n;j++)
        {
            for(k = 1;k <= n;k++)
            {
                if(a[j][k] == 'a')
                {
                    a[j][k] = '@';
                }
            }
        }
    }
    for(i = 1;i <= n;i++)
    {
        for(j = 1;j <= n;j++)
        {
            if(a[i][j] == '@')
            {
                num++;
            }
        }
    }
    cout << num;
    return 0;
}
