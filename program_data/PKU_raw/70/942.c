int main()
{
    int n = 0 ;
    cin >> n ;
    double a[10000][2] ; 
    int i = 0 , j = 0 ;
    for( i = 0 ; i <= n - 1 ; i ++ )
    cin >> a[i][0] >> a[i][1] ;
    double Max = 0.0 , temp = 0.0 ; 
    for( i = 0 ; i <= n - 1 ; i ++ )
         for( j = 0 ; j <= n - 1 ; j ++ )
         {
              temp = sqrt ( ( a[i][0] - a[j][0] ) * ( a[i][0] - a[j][0] ) + ( a[i][1] - a[j][1] ) * ( a[i][1] - a[j][1] ) ) ;
              if( temp > Max )
              Max = temp ;
         }
    printf("%.4f\n", Max) ;
return 0 ;
} 