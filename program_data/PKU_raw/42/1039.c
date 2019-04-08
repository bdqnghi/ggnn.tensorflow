//name?????????
//author:??
//created on:2011.10.26
int main()
{
    int n, i = 0, j, k, m = 0, flag = 1;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    cin >> a[i];
    cin >> k;
    for (i = 0; i < n; i++)
    {
        while (a[i] == k)
        {
              for(j = i; j < n; j++)
                a[j] = a[j + 1];
                m++;
        }
    }
    cout << a[0];
    for(i = 1; i < (n - m); i++)
    cout << " " << a[i];
    return 0;
}       
