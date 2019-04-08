int main()
{
    int n, i, j, sum, l;
    char a[41];
    char *p = a;
    cin >> n;
    sum = 0;
    for (i = 1; i <= n; i++)
    {
       cin >> a;
       l = strlen(a);
       if (sum == 0) 
       {
            for (j = 0; j <l; j++) cout << *(p+j);
          //  cout << a;
            sum = l;
        }
       else
       if ( sum + l + 1 <= 80) 
       {
            cout << ' ' << a;
            sum = sum + l +1;
       }
       else 
       {
           sum = l;
           cout << endl<< a;
       }
    }
    return 0;
}
