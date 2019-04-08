int main()
{
    int n[300], m[300], i, j, k = 0, t = 0, a[300] = {0}, num = 0, s[300];
    for(i = 0;i < 300;i++)
    {
        cin >> n[i] >> m[i];
        if(n[i] == 0 && m[i] == 0)
        {
            break;
        }
        for(j = 1;j <= n[i];j++)
        {
            a[j] = 1;
        }
        while(num < n[i])
        {
            k++;
            if(k == n[i] + 1)
            {
                k = 1;
            }
            if(a[k] != 0)
            {
                t++;
                if(t == m[i])
                {
                    a[k] = 0;
                    t = 0;
                    num++;
                    s[i] = k;
                }
            }
        }
        k = t = num =0;
        for(j = 1;j < 300;j++)
        {
            a[j] = 0;
        }
    }
    for(j = 0;j < i;j++)
    {
        cout << s[j] << endl;
    }
    return 0;
}