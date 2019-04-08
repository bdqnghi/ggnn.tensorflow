

int main()
{
    int a[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m + n; i++) {
        int j = 0;
        while (j <= i) {
            if (j < m && i-j < n) {
                cout << a[j][i-j] << endl;
            }
            j++;
        }
    }
}