int main()
{
    char ch[100][100] ;
    int m = 0 ;
    cin >> m ;
    cin.get() == '\n' ;
    int i = 0 ;
    for( i = 0 ; i <= m - 1 ; i ++ )
    {
        cin.get( ch[i] , 100 , '\n' ) ;
        cin.get() == '\n' ;
    }    
    for( i = 0 ; i <= m - 1 ; i ++ )
    {
         if( ch[i][0] == 95 || ( ch[i][0] >= 97 && ch[i][0] <= 122 ) || ( ch[i][0] >= 65 && ch[i][0] <= 90 ) )
         {
         int j = 0 ;
         int n = 0 ;
         n = strlen( ch[i] ) ;
         int counter = 0 ;
         for( j = 0 ; j <= n - 1 ; j ++ )
         {
              if( ch[i][j] == 95  || ( ch[i][j] >= 97 && ch[i][j] <= 122 ) || ( ch[i][j] >= 65 && ch[i][j] <= 90 ) || ( ch[i][j] >= 48 && ch[i][j] <= 57) )
              counter = counter + 0 ;
              else
              counter = counter + 1 ;
         }
              if( counter == 0 )
              cout << 1 << endl ;
              else
              cout << 0 << endl ;
         }
         else
         cout << 0 << endl ;
    }
return 0; 
} 
