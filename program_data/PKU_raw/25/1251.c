
int main()
{
    int n, ans[101], len, t;
    memset(ans, 0, sizeof(ans));
    ans[0] = 1;
    len = 0;
    
    cin >> n;
    
    for (int i = 1; i <= n; ++i)
    {
        t = 0;
        for (int j = 0; j <= len; ++j)
        {
            ans[j] *= 2;
            ans[j] += t;
            if (ans[j] >= 10)
            {
                       t = 1;
                       ans[j] -= 10;
            }
            else
            {
                t = 0;
            }
        }
        ans[len + 1] += t;
        if (ans[len + 1] != 0) ++len;
    }
    for (int i = len; i >= 0; --i)
      cout << ans[i];
    return 0;
}