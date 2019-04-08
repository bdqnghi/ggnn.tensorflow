int main ()
{
    int n,m, data[100][100], counter = 0;
    char temp;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
            cin >> temp;
            switch(temp){
                case '.' :data[i][j] = 0;break;
                case '#' :data[i][j] = -1; break;
                case '@' :data[i][j] = 1; break;
            }
        }
    cin >> m;
    for (int k = 2; k <= m; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (data[i][j]==k-1){
                    if (i+1<n && !data[i+1][j]) data[i+1][j] = k;
                    if (i-1>=0 && !data[i-1][j]) data[i-1][j] = k;
                    if (j+1<n && !data[i][j+1]) data[i][j+1] = k;
                    if (j-1>=0 && !data[i][j-1]) data[i][j-1] = k;
            }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (data[i][j] > 0) counter++;
    cout << counter;
    return 0;
}