int main()
{
    int n, i;
    cin >> n;
    for ( i = 6; i <= n; i = i + 2)
    {
        int a, b, m = 0;
        for ( a = 3; a <= i / 2; a = a + 2)
        {
            int s, k = 0;
            for (s = 3; s <= sqrt(a); s = s + 2)
            {
                if ( a % s == 0)
                {
                     k = 1;
                     break;
                }
            }
            if ( k == 0 )
            {
                 b = i - a;
                 int j, t = 0;
                 for (j = 3; j <= sqrt(b); j = j + 2)
                 {
                     if ( b % j == 0)
                     {
                          t = 1;
                          break;
                     }
                 }
                 if ( t == 0 )
                 {
                      cout << i << "=" << a << "+" << b <<endl;
                      m = 1;
                 }
            }
            if ( m == 1)
               break;
        }
    }
    return 0;
}
