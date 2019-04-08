int main()
{
    int a[10001], n, i, x;
    char ch;
    n = 0;
    while ( (ch=cin.get()) != '\n' )
    {
        a[n] = ch - '0';
        n++;
    }
    for ( i = 0; i < n / 2; i++ )
	{ 
		x = a[i];
        a[i] = a[n-i-1];
		a[n-i-1] = x;
	}
    for ( i = 0; i < n; i++ )
        cout << a[i];
   return 0;
}