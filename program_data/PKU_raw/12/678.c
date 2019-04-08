int main()
{
 int a[16], b, i = 0, k;
 while (1)
 {
  b = 0;
  int a[16] = {0};
  for ( i = 0 ; i <= 15 ; i++ )
  {   
   cin >> a[i];
   if (( a[i] == 0 ) || ( a[i] == -1 ))
    break;
    for ( k = 0 ; k < i ; k++ )
    {
     if (( a[i] == 2 * a[k] ) || ( a[i] == 0.5 *a[k]))
      b++;
    }
   }
    if ( a[i] == -1 )
     break;
    cout << b <<endl;
  }
  return 0;
}