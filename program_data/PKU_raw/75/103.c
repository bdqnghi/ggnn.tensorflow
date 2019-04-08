int main()
{
    int x[1000] = {0}, y[1000] = {0}, s[1000] = {0};
    int i = 0, j, k, earliest, latest = 0, max = 0;
    char c;
    while (cin >> x[i])
    {
        i++;
        c = getchar();
        if (c == '\n')
            break;
    }
    for (j = 0; j < i; j++)
    {
        cin >> y[j];
        c = getchar();
    }
    earliest = x[0];
    for (j = 0; j < i; j++)
    {
        if (earliest > x[j])
            earliest = x[j];
        if (latest < y[j])
            latest = y[j];
    }
    for (j = earliest; j <= latest; j++)
    {
        for (k = 0; k <= i; k++)
        {
            if (x[k] <= j && y[k] > j)
                s[j]++;
        }
    }
    for (j = earliest; j <= latest; j++)
    {
        if (max < s[j])
            max = s[j];
    }
    cout << i << " " << max << endl;
    return 0;
}