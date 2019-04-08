int main()
{
  int i , j , n , k ;
  int row ,col ;
  int a[101][101] ; 
  cin >> row >> col ;
  for( i = 1 ;i <= row ; i ++ ) 
      for ( j = 1 ;j <= col ; j ++ )     
      {
         cin >> a[i][j] ;    
      }
  for( j = 1 ;j <= col ; j ++ )
  {
     cout << a[1][j] << endl ;
     int k = 1 ;
     while( ((1 + k) <= row )&&( (j - k) >= 1 ))
     {
       cout << a[1 + k ][j - k] << endl;
       k ++ ;
     }     
  }  
      for( i = 2 ; i <= row ;i ++ )
      {
        cout << a[i][col] << endl ;
        int k = 1 ;
        while( ((i + k) <= row)&&( (col - k) >= 1 ))
        {
       cout << a[i + k ][ col - k ] << endl;
       k ++ ;
         }     
      }
      return 0 ;
}
    