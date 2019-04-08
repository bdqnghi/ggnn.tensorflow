
int su ( int x2 )
{
   int i ,x;
   x = x2/2;
   for ( i = 3 ; i < x ; i ++ )
    if ( x2 % i == 0 )
     return 0;
   return 1;
}

int main ()
{
   int n , i , f=1 , x1=3 , x2=5;
   scanf ( "%d" , &n );
   for ( ; x1 < n ; x1 = x2 )
    for ( x2 = x1 + 2 ; x2 <= n ; x2 += 2 )
     if ( su (x2) )
      {
       if ( x2 == x1 + 2 )
        { printf ( "%d %d\n" , x1 , x2 ); f = 0; }
       break;
      }
   if ( f )
    printf ( "empty" );
  // getchar (); getchar ();
   return 0;
}
