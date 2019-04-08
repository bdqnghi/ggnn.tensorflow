
const int dx[8] = {-1, -1, 0 , 1, 1, 1, 0, -1},
          dy[8] = {0 , -1, -1, -1, 0, 1, 1, 1};
int a[9][9];

int number (int x, int y, int day)
{
    if (day == 0) return a[x][y];
    
    int v = 0;
    
    for (int i = 0; i < 8; ++i)
      if (x + dx[i] >=0 && x + dx[i] < 9 && y + dy[i] >= 0 && y + dy[i] < 9)
          v += number(x + dx[i], y + dy[i], day - 1);
    
    v +=  2 * number(x, y, day - 1);
    
    return v;
}

int main()
{
    int m, n;
    
    cin >> m >> n;
    
    for (int j = 0; j < 9; ++j)
      for (int k = 0; k < 9; ++k)
        a[j][k] = 0;
    
    a[4][4] = m;

    for (int j = 0; j < 9; ++j)
    {
        for (int k = 0; k < 9; ++k)
        {
            if (k != 0) cout << " ";
            cout << number(j, k, n);
        }
        cout << endl;
    }
    return 0;
}
