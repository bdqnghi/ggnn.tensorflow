

int main()
{
    int a[100][100];
    int n;
    cin >> n;
    for (int k = 0; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> a[i][j];
        int total = 0;
        for (int t = 0; t < n - 1; ++t)
        {
            for (int i = 0; i < n; ++i)
            {
                if (i != 0 && i <= t)
                    continue;
                int minValue = a[i][0];
                for (int j = t + 1; j < n; ++j)
                    if (a[i][j] < minValue)
                        minValue = a[i][j];
                a[i][0] -= minValue;
                for (int j = t + 1; j < n; ++j)
                    a[i][j] -= minValue;
            }
            for (int j = 0; j < n; ++j)
            {
                if (j != 0 && j <= t)
                    continue;
                int minValue = a[0][j];
                for (int i = t + 1; i < n; ++i)
                    if (a[i][j] < minValue)
                        minValue = a[i][j];
                a[0][j] -= minValue;
                for (int i = t + 1; i < n; ++i)
                    a[i][j] -= minValue;
            }
            total += a[t + 1][t + 1];   
        }
        cout << total << endl;
    }
}
