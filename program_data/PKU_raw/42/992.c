int main()
{
 int n, k, i, j, l, m, o, b=0;
 cin >> n;
 int a[n];
 for ( i = 0 ; i <= n - 1 ; i++)
 {
  cin >> a[i];
 }
 cin >> k;
 for ( j = 0 ; j <= n - 1 ; j++)
 {
   if ( a[j] == k ) 
   {
     for ( l = j ; l <= n - 1 ; l++)
     {
       a[l] = a[l+1];
      }
       j--;
     b++;
   }
 }
  for ( m = 0 ; m <= n - b - 1 ;  m++)
  { 
    if ( m != n - b - 1 )
    cout << a[m] <<" ";
    else
    cout << a[m];
  }
 return 0;
}