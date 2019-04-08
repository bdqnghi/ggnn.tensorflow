
int main()
{
    int matrix[99][99], row, column, startcolumn = 0, startrow = 1;
    cin >> row >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int x = 0, y;
    do
    {
        y = startcolumn;
        while (x < row && y >= 0)
        {
              cout << matrix[x][y] << endl;
              x++; y--;
        }
        x = 0; startcolumn++;
    } while (startcolumn < column);
    int m, n = column - 1;
    do
    {
        m = startrow;
        while (m < row && n >= 0)
        {
              cout << matrix[m][n] << endl;
              m++; n--;
        }
        startrow++; n = column - 1;
    } while (startrow < row);            
    
    return 0;
}
    
