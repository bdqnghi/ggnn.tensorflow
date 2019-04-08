
int main ()
{
   int n;
   double a , b , c , d , x1 , x2 , i;
   scanf ( "%d" , &n );
   for ( ; n > 0 ; n -- )
    {
     scanf ( "%lf%lf%lf" , &a , &b , &c );
     d = b*b-4*a*c;
     if ( d > 0 )
      {
       x1 = (-b + sqrt(d))/(2*a);
       x2 = (-b - sqrt(d))/(2*a);
       if ( x1 == 0 ) x1 = 0;
       if ( x2 == 0 ) x2 = 0;
       printf ( "x1=%.5lf;x2=%.5lf\n" , x1 , x2 );
      }
      else if ( d == 0 )
       {
        x1 = -b/(2*a);
        if ( x1 == 0 ) x1 = 0;
        printf ( "x1=x2=%.5lf\n" , x1);
       }
      else
       {
        x1 = -b/(2*a);
        x2 = sqrt(-d)/(2*a);
        if ( x1 == 0 ) x1 = 0;
        if ( x2 == 0 ) x2 = 0;
        if ( x2 < 0 ) x2 = -x2;
        printf ( "x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n" , x1 , x2 , x1 , x2);
       }
    }
  // getchar (); getchar ();
   return 0;
}

