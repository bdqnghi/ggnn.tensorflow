int main()
{
    int n, i, x, y, z, a, sum, leap;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        cin >> x >> y >> z;
        if (y > z)
        {
            a = y;
            y = z;
            z = a;
        }
        leap = x % 4 == 0 && x % 100 != 0 || x % 400 == 0;
        for ( ; y < z; y++)
        {
            if (y == 4 || y == 6 || y == 9 || y == 11)
            {
                sum += 30;
            }
            else if (y == 2)
            {
                sum += 28 + leap;
            }
            else
            {
                sum += 31;
            }
        }
        if (sum % 7 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
