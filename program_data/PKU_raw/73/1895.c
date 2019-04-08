int main()
{
    int num[6][6];
    int i, j, k, l = 0;
    for ( i = 1; i < 6; i++ )
        for ( j = 1; j < 6; j++ )
            cin >> num[i][j];
    int max, row, line;
    for ( i = 1; i < 6; i++ )
    {
        max = num[i][1];
        line = 1;
        for ( j = 1; j < 6; j++ )
        {
            if ( max < num[i][j] )
            {
                 max = num[i][j];
                 line = j;
            }
        }
        int p = 0;
        for ( k = 1; k < 6; k++ )
        {
            if ( max > num[k][line] )
            {
                 p = 1;
                 break;
            }
        }
        if ( p == 0 )
        {
             cout << i << " " << line << " " << num[i][line] << endl;
             l = 1;
        }
    }
    if ( l == 0 )
       cout << "not found" << endl;
    return 0;
}
