int main()
{
  int m ;
  cin >> m ;
  int p ;
  char a[m+1][27];
  int len[m +1];
  int b[m+1];
  int c[26];
  int i , j , k  ,l ;
  for( i = 0 ;i <=25 ; i++ )
       c[i] = 0 ;
       for( i = 1 ; i <= m ; i ++ )
        {
              cin >> b[i];
               cin >> a[i] ;
                  len[i] = strlen(a[i]);
                  for( j = 0; j <= len[i] -1 ; j ++ )
                  {
                         c[a[i][j] - 'A']++ ;     
                  } 
          }
  int temp = -1 ;
  for( i = 0; i<= 25 ; i ++ )
  {
    if( c[i]> temp )
    {
       temp = c[i] ;
       p = i ; 
    }
  }
  char n = 'A'+ p ;
  cout << n << endl ;
  cout << temp << endl ;
  for( i = 1; i <= m ; i ++ )
   for ( j = 0 ; j<= len[i] -1 ; j ++ )
   {
         if(a[i][j] == '\0')
         {
          break ;
         }
         else if(a[i][j] == n)
         {
          cout << b[i]<<endl;    
          break ;
         }
   }
   return 0 ;
}