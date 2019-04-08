//10?28????????????????????1000012899?
int main()
  {
    int n, k, a[100001], i, j, m;
    cin >> n;
    for (i = 1; i <= n; i ++) cin >> a[i];
    cin >> k;
    m = n;
   i = 1;
    while (i <= m )
     {
        while(a[i] == k)
          {
             for (j = i; j <= m; j ++) a[j] = a[j+1];
             m = m - 1;
           }
        i ++;
      }
    cout << a[1];
    for (i = 2; i <= m; i ++) cout << ' ' << a[i];
    return 0;
  }

