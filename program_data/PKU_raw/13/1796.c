int main()
{
    int a[20000];
    int n, k;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] != 0&&a[j] == a[i])
                a[j] = 0;
        }
    }

    for(k = 0; k < n; k++)
    {
        if(a[k] != 0)
        {
            cout << a[k];
            break;
        }
    }

    for(int i = k + 1; i < n; i++)
    {
        if(a[i] != 0)
            cout << ' ' << a[i];
    }

    return 0;
}
