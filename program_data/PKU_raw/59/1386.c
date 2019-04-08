int main()
{
    int n;
    cin >> n;
    char room[n+2][n+2];
    int room1[n+2][n+2];
    for(int i = 1; i <= n; ++i)
            for(int t = 1; t <= n; ++t) 
            {
                    cin >> room[i][t];
                    if(room[i][t] == '@') room1[i][t] = 1;
                    else room1[i][t] = 0;
            }
    for(int i = 0; i <= n+1; ++i)
    {
            room[0][i] = '#';
            room[n+1][i] = '#';
            room[i][0] = '#';
            room[i][n+1] = '#';
            room1[0][i] = 0;
            room1[n+1][i] = 0;
            room1[i][0] = 0;
            room1[i][n+1] = 0;
    }
    int m;
    cin >> m;
    for(int day = 1; day <= m-1; ++day)
    {
        for(int i = 1; i <= n; ++i)
        {
            for(int t = 1; t <= n; ++t)
            {
                    if(room1[i][t] == 1)
                    {
                                  if(room[i+1][t] != '#') room[i+1][t] = '@';
                                  if(room[i-1][t] != '#') room[i-1][t] = '@';
                                  if(room[i][t+1] != '#') room[i][t+1] = '@';
                                  if(room[i][t-1] != '#') room[i][t-1] = '@';
                    }
            } 
        }
        for(int i = 1; i <= n; ++i)
                    for(int t = 1; t <= n; ++t)
                    {
                            if(room[i][t] == '@') room1[i][t] = 1;
                    } 
    }
    int sum = 0;
    for(int i = 1; i <= n; ++i)
            for(int t = 1; t <= n; ++t)
            {
                    if(room[i][t] == '@') sum++;
            }
    cout << sum;
    //while(1);
    return 0;
}
