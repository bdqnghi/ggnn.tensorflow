//********************************
//*???????k?     **
//*?????? 1200012839 **
//*???2012.10.30   **
//********************************

int main()
{
    int n, k, c=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        while (a[i] == k)
        {
            for (int j = i; j < n; j++)
            {
                a[j] = a[j+1];
            }
            c++;
        }
    }
    cout << a[0];
    for (int i = 1; i < n - c; i++)
    {
        cout << " " << a[i];
    }
    return 0;
}