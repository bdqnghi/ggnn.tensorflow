int main()
{
    char a[100][100] , b[100] ,c[100] ;
    int i = 0 ;
    int len = 0 ;
    for( i = 0 ; i <= 99 ; i ++ )
    {
    cin >> a[i] ;
    len ++ ;
    if( cin.get() == '\n' )
    break ;
    }
    cin >> b >> c ;
    for( i = 0 ; i <= len - 1 ; i ++ )
    {
         if( strcmp( a[i] , b ) == 0 )
             strcpy( a[i] , c );
         if( i >= 1 )
             cout << " " ;
         cout << a[i] ;
    } 
return 0;
}