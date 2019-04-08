
char p[100][100];
int state[100][100] = {0};;
int n, m, num = 0;

void spread(int x, int y, int k);

int main()
{
    cin >> n;
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> p[i][j];
            if (p[i][j] == '@')
            {
                num++;
                state[i][j] = 1;
            }
        }
    }
    cin >> m;
    for (k = 1; k < m; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (p[i][j] == '@' && state[i][j] == k)
                {
                    spread(i - 1, j, k);
                    spread(i + 1, j, k);
                    spread(i, j - 1, k);
                    spread(i, j + 1, k);
                }
            }
        }
    }
    cout << num << endl;
    return 0;
}

void spread(int x, int y, int k)
{
     if (x < 0 || x == n || y < 0 || y == n)
         return;
     if (p[x][y] == '@' || p[x][y] == '#')
         return;
     if (p[x][y] == '.')
     {
         p[x][y] = '@';
         num++;
         state[x][y] = k + 1;
     }
}
