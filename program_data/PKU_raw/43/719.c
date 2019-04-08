int main()
{
    int m, i, different, mod;
    cin >> m;
    for (i = 3; i <= m / 2; i += 2)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            mod = i % j;
            if (mod != 0)
                continue;
            else
            {
                mod = 0;
                break;
            }
        }
            if (mod != 0 || i == 3)
            {
                different = m - i;
                for (int k = 2; k <= sqrt(different); k++)
                {
                    mod = different % k;
                    if (mod != 0)
                        continue;
                    else
                    {
                        mod = 0;
                        break;
                    }
                }
                if (mod != 0 || different == 3)
                    cout << i << " " << different << endl;
            }
            else
                continue;
    }
    return 0;
}
