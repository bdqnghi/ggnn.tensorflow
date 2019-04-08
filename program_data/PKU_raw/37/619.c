

int main()
{
    int a[26] , i , n , k , j , l ; 
    char s[100001] ; 
    cin >> n ; 
    for (i = 1 ; i <= n ; i ++ )
    {
        cin >> s ; 
        l = strlen(s) - 1 ; 
        for (j = 0 ; j <= 25 ; j ++ )
            a[j] = 0 ; 
        for (j = 0 ; j <= l ; j ++ )
            a[s[j] - 'a'] ++ ; 
        for (j = 0 ; j <= 25 ; j ++ )
        {
            if (a[j] == 1)
                      for (k = 0 ; k <= l ; k ++ )
                      {
                          if (s[k] - 'a' == j)
                             a[j] = k ; 
                             }
            else
                   a[j] = -1 ; 
                   }
        for (j = 0 , k = 110000 ; j <= 25 ; j ++ )
            if ((a[j] != -1) && (a[j] < k))
               k = a[j] ; 
        if (k == 110000)
           cout << "no" << endl ; 
        else
            cout << s[k] << endl ; 
            }
    return 0 ; 
}
