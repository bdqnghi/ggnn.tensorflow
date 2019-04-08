int n, a, cnt = 0, num;
int decompose(int x, int y)
{
    int i, xnum = 1;
    if(x == 1)
        return 0;
    if(x == 2)
        return 1;
    for(i = y; i <= (int)sqrt(x); i++)
        if(x % i == 0)
            xnum += decompose(x / i, i);
    return xnum;
}
int main()
{
    cin >> n;
    while(cnt < n)
    {
        cin >> a;
        num = decompose(a, 2);
        cout << num << endl;
        cnt++;
    }
    return 0;
}
