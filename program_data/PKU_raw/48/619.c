int board[11][11] = {0}, temp[11][11] = {0};

void increase(int day)
{
     if (day == 0)
     {
             return;
     }
     int i, j;
     for (i = 1; i < 10; i++)
     {
         for (j = 1; j < 10; j++)
         {
             temp[i + 1][j + 1] += board[i][j];
             temp[i + 1][j - 1] += board[i][j];
             temp[i - 1][j - 1] += board[i][j];
             temp[i - 1][j + 1] += board[i][j];
             temp[i - 1][j] += board[i][j];
             temp[i + 1][j] += board[i][j];
             temp[i][j - 1] += board[i][j];
             temp[i][j + 1] += board[i][j];
             temp[i][j] += board[i][j];
         }
     }
     for (i = 1; i < 10; i++)
     {
         for (j = 1; j < 10; j++)
         {
             board[i][j] = temp[i][j];
         }
     }
     return increase(day - 1);
}

int main()
{
    int num, day,i,j;
    cin >> num >> day;
    board[5][5] = num;
    temp[5][5] = num;
    increase(day);
    for (i = 1; i < 10; i++)
    {
         for (j = 1; j < 9; j++)
         {
             cout << temp[i][j] << " ";
         }
         cout << temp[i][j] << endl; 
     }
    return 0;
}
