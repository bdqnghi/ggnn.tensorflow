int main()
{
    char a[35] ;
    cin.getline(a,35) ;
    int n , i , j ,m[35] ;
    n = strlen(a) ;
    for ( i = 0 ; i <= 34 ; i ++ )
    m[i] = -1 ;
    j = 0 ;
    for ( i = 0 ; i <= n - 1 ; i ++ )
    {
        if( a[i] == '0' || a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' 
        || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9')
        {
                if ( m[j] == -1)
                m[j] = ( m[j]+ 1 ) * 10 + a[i] - '0' ;
                else
                m[j] = m[j]  * 10 + a[i] - '0' ;
        }
        else
        j ++ ;
    }
    for ( i = 0 ; i <= j ; i ++ )
    {
        if ( m[i] != -1 )
        cout << m[i] << endl ;
    }
        return 0 ;
} 
         