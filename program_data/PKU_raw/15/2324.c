int main()
{
    int n, tmp1, tmp2, m = 0, l = 0, i, s;
    cin >> n;
    cin >> tmp1;
    if (tmp1 == 0) {m++; l++;}
    for (i = 1; i < n * n; i++)
    {
        cin >> tmp2;
        l += (tmp2 == 0);
        m += (tmp2 == 0);
        if (tmp2 == 255 && tmp1 == 0)
        {
            break;
        }
        tmp1 = tmp2;
    }
    for (int j = i; j < n * n; j++)
    {
        cin >> tmp2;
        l += (tmp2 == 0);
    }
    s = (m - 2) * (l - 2 * m) / 2;
    cout << s << endl;
    return 0;
}