int main()
{
    int a[100][100];
    int flag[100][100] = {0};
    int i, j, row, col;
    int count = 0;
    cin >> row >> col;
    for (i = 0; i < row; i++)
     for (j = 0; j < col; j++)
     {
          cin >> a[i][j];
     }
    int hang1 = 0;
    int hang2 = row - 1;
    int lie1 = col - 1;
    int lie2 = 0;
    while (count < row * col)
    {
           for (j = 0; j < col; j++)
           { 
                if (flag[hang1][j] == 0)
                {
                    cout << a[hang1][j] << endl;
                    count++;
                    flag[hang1][j] = 1;
                }
           }
           hang1++;
           for (i = 0; i < row; i++)
           { 
                if (flag[i][lie1] == 0)
                {
                    cout << a[i][lie1] << endl;
                    count++;
                    flag[i][lie1] = 1;
                }
           }
           lie1--;
           for (j = col - 1; j >= 0; j--)
           { 
                if (flag[hang2][j] == 0)
                {
                    cout << a[hang2][j] << endl;
                    count++;
                    flag[hang2][j] = 1;
                }
           }
           hang2--;
           for (i = row - 1; i >= 0; i--)
           { 
                if (flag[i][lie2] == 0)
                {
                    cout << a[i][lie2] << endl;
                    count++;
                    flag[i][lie2] = 1;
                }
           }
           lie2++;
    }
    return 0;
}
           
