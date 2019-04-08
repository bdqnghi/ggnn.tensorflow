
int a[9][9] = {0};
int b[9][9] = {0};
int n, day = 0;

void feed()
{
     if (day == n)
         return;
     for (int i = 0; i <= 8; i++)
         for (int j = 0; j <= 8; j++)
         {
             b[i][j] += 2 * a[i][j];
             if (i + 1 <= 8)
             {
                 b[i + 1][j] += a[i][j];
                 if (j + 1 <= 8)
                     b[i + 1][j + 1] += a[i][j];
                 if (j - 1 >= 0)
                     b[i + 1][j - 1] += a[i][j];
             }
             if (i - 1 >= 0)
             {
                 b[i - 1][j] += a[i][j];
                 if (j + 1 <= 8)
                     b[i - 1][j + 1] += a[i][j];
                 if (j - 1 >= 0)
                     b[i - 1][j - 1] += a[i][j];
             }
             if (j + 1 <= 8)
                 b[i][j + 1] += a[i][j];
             if (j - 1 >= 0)
                 b[i][j - 1] += a[i][j];
         }
         for (int i = 0; i <= 8; i++)
             for (int j = 0; j <= 8; j++)
                 {
                      a[i][j] = b[i][j];
                      b[i][j] = 0;
                 }
         day++;
         feed();
}

int main()
{
    int m;
    cin >> m >> n;
    a[4][4] = m;
    feed();
    for (int i = 0; i <= 8; i++)
        for (int j = 0; j <= 8; j++)
        {
            cout << a[i][j];
            if (j < 8)
                cout << " ";
            if (j == 8)
                cout << endl;
        }
    return 0;
}