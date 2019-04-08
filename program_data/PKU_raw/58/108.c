int main()
{
    int i, j, n, l, flag;
    cin >> n;
    cin.get();
    for ( i = 1; i <= n; i++ )
    {
        flag = 1;
        char str[81];
        cin.getline ( str, 81 );
        if ( !(str[0] >= 'A' && str[0] <= 'z') && ( str[0] != '_' ) )
           flag = 0;
        l = strlen(str);
        if ( flag )
        {
             for ( j = 0; j < l;j++ )
             {
                 if ( str[j] >= 'A' && str[j] <= 'z' )
                    flag = 1;
                 else if ( str[j] >= '0' && str[j] <= '9' )
                         flag = 1;
                      else if ( str[j] == '_' )
                              flag = 1;
                           else
                           {
                               flag = 0;
                               break;
                           }
             }
        }
        cout << flag << endl;
    }
    return 0;
}