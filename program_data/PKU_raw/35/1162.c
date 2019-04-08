int main () 
{
    int i , j , n , m , a[8][8] , b[ 8 ] = {0} , d [ 8 ] = {0} ; char c;
    scanf ("%d%c%d" , &n , &c , &m);
    for (i = 0 ; i < n ; i ++ ) for ( j = 0 ; j < m ; j ++ ) 
     { scanf ( "%d" , &a[ i ][ j ] ) ;
       if ( a[ i ] [ j ] > a[ i ][ b [ i ] ] ) b [ i ] = j ; 
       if ( a[ i ] [ j ] < a[ b [ j ] ] [ j ] ) d[ j ] = i ;
     }
     j = 1 ;
    for ( i = 0 ; i < n ; i ++ ) if  (d [ b[ i ] ] == i )  
    { printf ("%d+%d" , i , b[ i ] ) ; j = 0 ;  }
    if ( j )printf ("No");
    
    return 0 ; 
}
