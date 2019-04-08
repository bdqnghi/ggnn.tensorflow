
int main()
{
    int n, m;
    cin >> n >> m;
    int a[2*n];
    int *p = NULL, *q = NULL;
    for ( p = a; p < a+n; p++ )
        cin >> *p;
    for ( q = a, p = a+n; q < a+n-m; p++, q++ )
        *p = *q;
    p = a+n-m;
    cout << *p;
    for ( p = a+n-m+1; p < a+n+n-m; p++ )
        cout << " " << *p;
    
    
    return 0;
}