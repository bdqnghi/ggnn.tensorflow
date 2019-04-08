//10?28?????????????????1000012899
int main()
  { 
    int n, a[20001], b[20001], i, m;
    cin >> n;
    m = n;
    for (i = 1; i <= n; i ++) b[i] = 0;
    for (i = 1; i <= n; i ++) 
      {
          cin >> a[i];
          b[a[i]] = 1;
       }
    i = 2;
    cout << a[1];
    b[a[1]] = 0;
      do
      {
        if ( b[a[i]] == 1) 
          {
             cout << ' ' << a[i] ;
             b[a[i]] = 0;
           }
        m = m - 1;
        i = i + 1;
       }
         while(m >= 0);
  /*   do
      {
        if ( b[a[i]] == 1) 
          {
             cout << a[i];
             b[a[i]] = 0;
           }
        m = m - 1;
        i = i + 1;
       }
         while(m > 0); */
   return 0;
  }

      

           

    