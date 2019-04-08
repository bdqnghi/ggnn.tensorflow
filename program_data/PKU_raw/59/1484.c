//********************************
//*???5.cpp   **
//*???????    **
//*?????? 1300012838 **
//*???2013.11.1  **
//********************************

int main()
{ 
    int n, m, cnt = 0, flag = 0;
    char room[102][102][2];
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> room[i][j][0];
    cin >> m;
    for (int day = 1; day < m; day++)
    {
        flag = 1 - flag;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (room[i][j][1-flag] != '#')
                {
                    if (room[i-1][j][1-flag] == '@' || 
                        room[i+1][j][1-flag] == '@' || 
                        room[i][j-1][1-flag] == '@' || 
                        room[i][j+1][1-flag] == '@')
                        room[i][j][flag] = '@';
                    else
                        room[i][j][flag] = room[i][j][1-flag];
                }
                else
                    room[i][j][flag] = '#';
            }
        }

    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if(room[i][j][flag] == '@')
                cnt++;
        }
    cout << cnt << endl;
                    


    return 0;                    
}  