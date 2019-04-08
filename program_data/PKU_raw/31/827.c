
struct student
{
   struct student *last;
   char a[100];
};

int main ()
{
  // freopen ( "1.in" , "r" , stdin );
  // freopen ( "1.out" , "w" , stdout );
   
   char a[100];
   struct student *p , *p1;
   p = p1 = ( struct student * ) malloc ( sizeof ( struct student ) );
   p1->last = NULL;
   gets ( p1->a );
   for ( ; ; )
    {
     gets ( a );
     if ( strcmp ( a , "end" ) == 0 ) break;
     p = ( struct student * ) malloc ( sizeof ( struct student ) );
     strcpy ( p->a , a );
     p->last = p1;
     p1 = p;
    }
   for ( ; ; )
    {
     printf ( "%s" , p->a );
     p = p->last;
     if ( p == NULL ) break;
      else printf ( "\n" );
    }
   return 0;
}
