
int main()
{
    int n ;
    cin >> n ;
    int a[n];
    int i , j ;
    for ( i = 0 ; i < n ; i++ )
      {
          cin >> a[i] ;
      }
        cout << a[0] ;
    for ( i = 1 ; i < n ; i++ )
        {
            for ( j = 0 ; j < i ; j++ )
               {
                   if( a[j] == a[i] )
                   {
                       break;
                   }
                }
                if( i == j )//?????????????????????
                   {
                       cout << " " << a[i] ;//?????????????
                   }
        }
         return 0;
}
