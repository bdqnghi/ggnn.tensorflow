


int main()
{
    char a[510];
    int cnt[500] = {0};
    int f[500] = {0};
    int n, i, j, l, m = 0, flag = 0;
    cin >> n;
    cin >> a;
    char b[500][n + 10];
    l = strlen(a);
    memset( b, 0, sizeof( b) ) ;
    for(i = 0; i < l - n + 1; ++i)
        {
            for(j = 0; j < n; j++)
            b[i][j] = *(a + i + j);
        }
    for(i = 0; i < l - n; ++i)
        {
            if( f[i] )
            continue ;
            for(j = i + 1; j < l - n + 1; ++j)
            {
                if(strcmp(*(b + i), *(b + j)) == 0)
                {
                    flag = 1;
                    f[j] = 1;
                    cnt[i] ++;
                }
            }
        }
    if(flag == 0)
    cout << "NO" << endl;
    else
    {
        for(i = 0; i < 500; i++)
        {
            if(cnt[i] > m)
                m = cnt[i];
        }
        cout << m + 1 << endl;
        for(i = 0; i < 500; i++)
        {
            if(f[i] == 0 && cnt[i] == m)
                cout << *(b + i) << endl;
        }
    }

    return 0;
}
