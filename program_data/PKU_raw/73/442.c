int main()
{
    int flag = 0;
    int g;
    int k;
    int a[5][5];
    int i;
    int row[5];
    int column;
    int temp;
    int j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        column = 0;
        temp = a[i][0];
        for (j = 1; j < 5; j++) 
        {
            if (a[i][j] > temp)
            {
                temp = a[i][j];
                column = j;
            }
        }
        row[i] = column;
    }
    for (i = 0; i < 5; i++)
    {
        g = 0;
        k = row[i];
        for (j = 0; j < 5; j++)
        {
            if (a[j][k] < a[i][k])
            {
                g++;
            }
        }
        if (g == 0)
        {
            cout << i + 1 << " " << k + 1 << " " << a[i][k] << endl;
            flag ++ ;
        }
    }
    if (flag == 0)
    {
        cout << "not found" <<endl;
    }
    return 0;
}