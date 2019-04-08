

void car()
{
     int n, m, i = 0, a[100], b[100];
     cin >> n >> m;
     for(i = 0; i < n; i++)
     {
           cin >> a[i];
     }
     for(i = 0; i < m; i++)
     {
           cin >> b[i];
     }
     sort(a, a + n);
     sort(b, b + m);
     for(i = 0; i < n; i++)
     {
           cout << a[i] << " ";
     }
     for(i = 0; i < m - 1; i++)
     {
           cout << b[i] << " ";
     }
     cout << b[i];
     return;
}     

int main()
{
    car();
    return 0;
}
