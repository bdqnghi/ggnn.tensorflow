int main ()
{
    int n ;
    cin >> n ;
    int number[500] ;                       //?????? 
    
    for ( int i = 1 ; i <= n ; i++ )        //??
        cin >> number[i-1] ;
 
    for ( int i = 1 ; i <= n - 1 ; i++ )    //?????
        for ( int j = 1 ; j <= n - i ; j++ )
        {
            int change = 0 ;
            if ( number[j-1] > number[j] )
            {
                 change = number[j-1] ;
                 number[j-1] = number[j] ;
                 number[j] = change ;
            }
        }

    int sum = 0 ;                           //???????????????????
    for ( int i = 1 ; i <= n ; i++ )
        if ( number[i-1] % 2 == 1 )
           sum++ ;
    
    int rank = 0;                           //?????????????? 
    for ( int i = 1 ; i <= n ; i++ )        //?? 
        if ( number[i-1] % 2 == 1 )
        {
           rank++ ;                         //rank = ?????????? 
           if ( rank == sum )               //??????? 
           {
               cout << number[i-1] ;        //???? 
               break ;                      //????????? 
           }
           else                             //?????????? 
               cout << number[i-1] << "," ;
        }
    return 0 ; 
}
// ( > w < ) finished~