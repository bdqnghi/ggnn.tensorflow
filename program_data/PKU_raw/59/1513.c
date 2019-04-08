
int main()
{
    char room[100][100];
    int i, j, k, n, m;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
    cin >> room[i][j];

    
    cin >> m;

    for(k = 2; k <= m; k++)
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(room[i][j] == '@')
                {
                    if(room[i][j + 1] == '.' && j != n - 1) room[i][j + 1] = '$';
                    if(room[i][j - 1] == '.' && j != 0) room[i][j - 1] = '$';
                    if(room[i + 1][j] == '.' && i != n - 1) room[i + 1][j] = '$';
                    if(room[i - 1][j] == '.' && i != 0) room[i - 1][j] = '$';
                }
            }
        }
        
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(room[i][j] == '$') room[i][j] = '@';
            }
        }
    }
    
    k = 0;
    for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
    {
        if(room[i][j] == '@') k++;
    }
    
    cout << k << endl;

    return 0;
}
