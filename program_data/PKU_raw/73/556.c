int main()
{
    int i, j, k = 0;
    int a[5][5];
    int max[5];
    int min[5];
    for (i = 0; i <= 4; i++)
        for (j = 0; j <= 4; j++)
            cin >> a[i][j];
    for (i = 0; i < 5; i++)
    {
        max[i] = a[i][0];
        min[i] = a[0][i];
    }
    for (i = 0; i <= 4; i++)
        for (j = 0; j <= 4; j++)
        {
            if (a[i][j] > max[i])
                max[i] = a[i][j];
            if (a[i][j] < min[j])
                min[j] = a[i][j];
        }
    for (i = 0; i <= 4; i++)
        for (j = 0; j <= 4; j++)
            if (max[i] == min[j])
            {
                cout << i + 1 << " " << j + 1 << " " << max[i];
                k++;
            }
    if (k == 0)
        cout << "not found";
    return 0;
}
