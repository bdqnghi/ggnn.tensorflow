int main()
{
    void fun ( int[] );
    int num[1000], i, n;
    cin >> n;
    memset( num, 0, sizeof(num) );
    num[0] = 1;
    for ( i = 1; i <= n; i++ )
        fun ( num );
    int *p = NULL;
    for ( p = num + 999; *p == 0; p-- );
    for ( ; p >= num; p-- )
        cout << *p;
    return 0;
}
void fun ( int num[] )
{
     int *p = NULL;
     for ( p = num; p < num + 1000; p++ )
         *p = 2 * *p;
     for ( p = num; p < num + 1000; p++ )
         if ( *p > 9 )
         {
              *p = *p - 10;
              *( p + 1 ) = *( p + 1 ) + 1;
         }
}