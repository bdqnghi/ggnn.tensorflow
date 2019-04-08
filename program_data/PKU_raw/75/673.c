int main()
{
    int a[1000], b[1000], c[1001], n, i = 0, j, max = 0;
    char ch;
    for(j = 0; j < 1001; j++)
        c[j] = 0;
    while(1)
    {
        cin >> a[i];
        cin.get(ch);
        i++;
        if(ch == '\n')
            break;
    }
    n = i;
    for(i = 0; i < n-1; i++)
        cin >> b[i] >> ch;
        cin >> b[n-1];
    for(i = 0; i < n; i++)
    {
        for(j = a[i]; j < b[i]; j++)
           {
            c[j] = c[j] + 1;
           }
    }
    for(j = 0; j < 1001; j++)
    {
        if(c[j] > max)
            max = c[j];
    }
    cout << n << " " << max << endl;
    return 0;
}
