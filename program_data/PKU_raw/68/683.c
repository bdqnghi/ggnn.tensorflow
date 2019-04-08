int main ()
  {
    int n, a, b, m, sushu ;
    cin >> n ;
    if ( n % 2 == 1) n = n - 1 ;
    for (int i = 6 ; i <= n ; i = i + 2)
     {
       a = 3;
       b = i - a ;
       do
       {
       sushu = 1;
         for (int j = 3; j <= sqrt(a) ; j = j + 2)
          if (a % j == 0 ) sushu = 0 ;
         if (sushu == 1)
          {
            for (int k = 3; k <= sqrt (b) ; k = k + 2)
              if (b % k == 0) sushu = 0 ;
          }
        if (sushu == 1)  {cout << i << '=' << a << '+' << b << endl; break;}
           else  {a = a + 2 ; b = b - 2;}
       }while (sushu != 1);
     }
  return 0;
  }

         