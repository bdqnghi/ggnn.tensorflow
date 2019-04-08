

int a[100][100];

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((i > 0 && a[i][j] >= a[i-1][j]) || i == 0)
                if ((j > 0 && a[i][j] >= a[i][j-1]) || j == 0)
                    if (a[i][j] >= a[i+1][j] && a[i][j] >= a[i][j+1])
                        cout << i << " " << j << endl;
        }
    }
}