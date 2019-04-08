
int main()
{
    int a[20000], i, j, n, r = 0, s = 0;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for(i = n - 1; i > 0; i--)
    for(j = i - 1; j >= 0; j--)
    {
        if(a[i] == a[j])
        {
            a[i] = -1;
            r++;
        }
    } 
    for(i = 0; i < n; i++)
    {
        if(a[i] != -1)
        {
            if(s != n - r - 1)
            {
                cout << a[i] << " ";
                s++;
            }
            else cout << a[i] << endl;
        }
    }

    return 0;
}
