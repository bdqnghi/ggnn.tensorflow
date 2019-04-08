// ?????? ???1000010500 
// ?????? 

int main()
{
    int i,j,temp,a[500],N,m;
    cin >> N;
    for (i = 0;i < N;i ++)              // ???? 
        cin >> a[i];
    for (i = 0,j = 0,m = N;j < N;j++)   // ???? 
        if (a[j] % 2 != 0)
            a[i ++] = a[j];
        else
            m --;
    for (i = 0;i < m - 1;i ++)          // ????? 
        for (j = 0;j < m - i - 1;j ++) 
            if (a[j] > a[j + 1])
            {
                 temp = a[j];
                 a[j] = a[j + 1];
                 a[j + 1] = temp;
            }
    cout << a[0];                       // ????? 
    for (i = 1;i < m;i ++)
        cout << ',' << a[i];
    return 0;
}