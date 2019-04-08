
int main()
{
    const int max_size = 100000;
    int a[max_size];
    
    int len, k;
    cin >> len;
    for (int i = 0; i < len; ++i)
        cin >> a[i];
    cin >> k;
    
    int r1, r2;
    r1 = -1;
    for (int i = 0; i < len; ++i)
      if (a[i] != k)
      {
               ++r1;
               a[r1] = a[i];
      }
    
    for (int i = 0; i <= r1; ++i)
    {
        if (i != 0)
        {
              cout << " ";
        }
        cout << a[i];
    }
    return 0;
}
