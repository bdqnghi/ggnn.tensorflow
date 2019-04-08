
int main()
{
    int matrix1[100][100], matrix2[100][100], matrix[100][100], x1, y1, x2, y2;
    int i, j, k;
    
    memset(matrix, 0, sizeof(matrix));
        
    cin >> x1 >> y1;
    
    for(i = 0; i < x1; i++)
    {
        for(j = 0; j < y1; j++)
        cin >> matrix1[i][j];
    }
    
    cin >> x2 >> y2;
    
    for(i = 0; i < x2; i++)
    {
        for(j = 0; j < y2; j++)
        cin >> matrix2[i][j];
    }
    
    for(i = 0; i < x1; i++)
    {
        for(j = 0; j < y2; j++)
        {
            for(k = 0; k < y1; k++)
            {
                matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    for(i = 0; i < x1; i++)
    {
        for(j = 0; j < y2 - 1; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << matrix[i][j] << endl;
    }

    return 0;
}
