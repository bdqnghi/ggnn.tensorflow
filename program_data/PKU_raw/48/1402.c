//
//  main.cpp
//  ????????
//
//  Created by ?? on 12-12-15.
//  Copyright (c) 2012? ??. All rights reserved.
//

int board[9][9] = {0};
void production(int days)
{
    int separation[9][9], i, j;
    if (days == 0)
        return;
    else
    {
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++)
            {
                board[i][j] *= 10;
                separation[i][j] = (board[i][j] - 2 * board[i][j] / 10) / 8;
                board[i][j] = 2 * board[i][j] / 10;
            }
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++)
            {
                board[i + 1][j] += separation[i][j];
                board[i - 1][j] += separation[i][j];
                board[i][j + 1] += separation[i][j];
                board[i][j - 1] += separation[i][j];
                board[i + 1][j + 1] += separation[i][j];
                board[i - 1][j + 1] += separation[i][j];
                board[i + 1][j - 1] += separation[i][j];
                board[i - 1][j - 1] += separation[i][j];
            }
        production(days - 1);
    }
}
int main()
{
    int num, days, i, j;
    cin >> num >> days;
    board[4][4] = num;
    production(days);
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
        {   if (j == 8)
                cout << board[i][j] <<endl;
            else
                cout << board[i][j] << " ";
        }
    return 0;
}