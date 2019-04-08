/*
 *??? 
 *2010 - 11 - 18 
 *?????1 - ????? 
 */
int main()
{
    int m, n;
    cin >> n;
    for ( m = 1; m <= n; m++ )
    {
        char str1[100], str2[100];
        cin >> str1 >> str2;//????????? 
        int num1[100], num2[100];
        int l1, l2, i, j;
        l1 = strlen(str1);
        l2 = strlen(str2);
        for ( i = l1 - 1, j = 0; i >= 0; i-- )//???????int??????????? 
        {
            num1[j] = str1[i] - '0';
            j++;
        }
        for ( i = l2 - 1, j = 0; i >= 0; i-- )
        {
            num2[j] = str2[i] - '0';
            j++;
        }
        for ( i = 0; i < l2; i++ )//???? 
            num1[i] = num1[i] - num2[i];
        for ( i = 0; i < l1; i++ )//???????????1 
            if ( num1[i] < 0 )
            {
                 num1[i] += 10;
                 num1[i + 1] -= 1;
            }
        if ( num1[l1 - 1] != 0 )//??????????????? 
           for ( i = l1 - 1; i >= 0; i-- )
               cout << num1[i];
        else
            for ( i = l1 - 2; i >= 0; i-- )
                cout << num1[i];
        cout << endl;
    }
    return 0;
}