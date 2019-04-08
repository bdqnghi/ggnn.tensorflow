
int main ()
{
   char a[5000] , t;
   int la , i , j;
   scanf ( "%s" , a );
   la = strlen ( a );
   for ( i = 0 ; i < la ; i ++ )
    if ( 'a' <= a[i] && a[i] <= 'z' )
     a[i] = a[i] - 'a' + 'A';
   for ( i = 0 ; i < la ; )
    {
     t = a[i++] , j = 1;
     for ( ; a[i] == t ; i ++ , j ++ );
     printf ( "(%c,%d)" , t , j );
    }
  // getchar (); getchar ();
   return 0;
}
