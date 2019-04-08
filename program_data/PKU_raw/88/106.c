int main()
{
    char ch[50] ;
    cin.get( ch , 50 , '\n' ) ;
    int i = 0 ; 
    int n = strlen( ch ) ;
    for( i = 0 ; i <= n - 1 ; i ++ )
    {
         if( ( int )ch[i] >= 48 && ( int )ch[i] <= 57 )
         cout << ch[i] ;
         else
         if( i > 0 )
         if( ( int )ch[i - 1] >= 48 && ( int )ch[i - 1] <= 57 )
         cout << endl ;
    }
return 0 ;
}