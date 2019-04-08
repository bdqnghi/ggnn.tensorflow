
int main()
{
    int ans[1000] = {0}, l = 0, i, n;
    cin >> n;
    ans[0] = 1;
    l = 1;
    while (n--)
    {
        for (i = 0; i < l; i++)
            ans[i] = ans[i] << 1;
        for (i = 0; i < l; i++)
        {
            if (i == l - 1 && ans[i] > 9)
            {
                l++;
            }
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
        }
    }
    for (i = l - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
    cout << endl;
    
    return 0;
}