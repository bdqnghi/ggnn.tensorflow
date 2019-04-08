int matrix[100][100] = {0} ;
void change(int k , int n)//???????????? 
{
    matrix[k + 1][k + 1] = matrix[k][k] ;
    int i = 0 ;
    if( n - 1 >= k + 2)
    {
        for( i = k + 2 ; i <= n - 1 ; i ++ )
             matrix[k + 1][i] = matrix[k][i] ;
        for( i = k + 2 ; i <= n - 1 ; i ++ )
             matrix[i][k + 1] = matrix[i][k] ;
    }
}
int main()
{
    int n = 0 ;
    cin >> n ;
    int m = 0 ;
    int sum[100] = {0} ;
    for( m = 0 ; m <= n - 1 ; m ++ )
    {
         
         int i = 0 , j = 0 ;
         for( i = 0 ; i <= n - 1 ; i ++ )
              for( j = 0 ; j <= n - 1 ; j ++ )
                   cin >> matrix[i][j] ;
         int k = 0 ;
         for( k = 0 ; k <= n - 2 ; k ++ )
         {
              int min = 10000 ;
              for( i = k ; i <= n - 1 ; i ++ )//????????? 
              {
                   min = 10000 ;
                   for( j = k ; j <= n - 1 ; j ++ )
                        if( matrix[i][j] < min )
                            min = matrix[i][j] ;
                   for( j = k ; j <= n - 1 ; j ++ )
                        matrix[i][j] = matrix[i][j] - min ;  
              }
              for( j = k ; j <= n - 1 ; j ++ )//?????????? 
              {
                   min = 10000 ;
                   for( i = k ; i <= n - 1 ; i ++ )
                        if( matrix[i][j] < min )
                            min = matrix[i][j] ;
                   for( i = k ; i <= n - 1 ; i ++ )
                        matrix[i][j] = matrix[i][j] - min ;  
              } 
              sum[m] = sum[m] + matrix[k + 1][k + 1] ;//???????????????? 
              change(k , n) ;
         }
    }
    for( m = 0 ; m <= n - 1 ; m ++ )
         cout << sum[m] << endl ;
    return 0 ;
}
