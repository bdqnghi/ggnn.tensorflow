
int g_arrayA[1024][1024];
int g_arrayB[1024][1024];


int main()
{
    int m, n, n1, k;
    cin >> m >> n;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> g_arrayA[i][j];
    }
    cin >> n1 >> k;
    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j < k; ++j)
            cin >> g_arrayB[i][j];
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < k; ++j)
        {
            int result = 0;
            for (int t = 0; t < n; ++t)
                result += g_arrayA[i][t] * g_arrayB[t][j];
            if (j == 0)
                cout << result;
            else
                cout << " " << result;
        }
        cout << endl;
    }
}
