int main()
{
    int m, i, j, k, n;
    cin >> m;
    for (i = 3; i <= m /2; i += 2)
    {
        j = m - i;
        for (k = 2; k < i; k ++)
            if (i % k == 0) break;
        else
            if (k > sqrt(i))
            {
                for (n = 3; n < j; n += 2)
                    if (j % n == 0)
                        break;
                    if (n > sqrt(j))
                    {
                        cout << i << " " << j << endl;
                        break;
                    }
            }
    }
    return 0;
}