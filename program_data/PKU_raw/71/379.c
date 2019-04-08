int main()
{
    int n, y, i, j, m1, m2, r[13], p[13];
    cin >> n;
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(i = 1;i < 13;i++)
    {
        p[i] = (p[i - 1] + a[i - 1]) % 7;
    }
    for(i = 1;i < 13;i++)
    {
        a[2] = 29;
        r[i] = (r[i - 1] + a[i - 1]) % 7;
    }
    for(i = 1;i <= n;i++)
    {
        cin >> y >> m1 >> m2;
        if (y % 4 != 0 || (y % 100 == 0 && y % 400 != 0))
        {
            if(p[m1] == p[m2])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if(r[m1] == r[m2])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}