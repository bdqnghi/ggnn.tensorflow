
int a[2][102][102] , x[2] , y[2] , t;

int main ()
{
   int i , j , k;
   for ( i = 0 ; i < 2 ; i ++ )
    {
     scanf ( "%d%d" , &x[i] , &y[i] );
     for ( j = 0 ; j < x[i] ; j ++ )
      for ( k = 0 ; k < y[i] ; k ++ )
       scanf ( "%d" , &a[i][j][k] );
    }
   for ( i = 0 ; i < x[0] ; i ++ )
    {
     for ( j = 0 ; j < y[1] ; j ++ )
      {
       t = 0;
       for ( k = 0 ; k < x[1] ; k ++ )
        t += a[0][i][k] * a[1][k][j];
       printf ( "%d" , t );
       if ( j < y[1] - 1 ) printf ( " " );
      }
     printf ( "\n" );
    }
  // getchar (); getchar ();
   return 0;
}
