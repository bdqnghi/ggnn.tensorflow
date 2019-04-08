//??
struct data
{
    char ch[10];
    double h;
}p[40], f[40], m[40];
int main()
{
    int n, i, j = 0, k = 0, len;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> p[i].ch >> p[i].h;
        len = strlen(p[i].ch);
        if (len == 4)
            m[j++].h = p[i].h;
        else
            f[k++].h = p[i].h;
    }
    for (i = j - 1; i > 0; i--)
        for (int x = 0; x < i; x++)
            if (m[x].h > m[x + 1].h)
            {
                double temp = m[x].h;
                m[x].h = m[x + 1].h;
                m[x + 1].h = temp;
            }
    for (i = k - 1; i > 0; i--)
        for (int x = 0; x < i; x++)
            if (f[x].h < f[x + 1].h)
            {
                double temp = f[x].h;
                f[x].h = f[x + 1].h;
                f[x + 1].h = temp;
            }
    cout << fixed << setprecision(2);
    for (i = 0; i < j;i++)
        cout << m[i].h << " ";
    cout << f[0].h;
    for (i = 1; i < k; i++)
        cout << " " << f[i].h;
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
