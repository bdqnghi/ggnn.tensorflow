int main()
{
    int n, i, sum = 0, a, b;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        a = i / 10;
        b = i - a * 10;
        if ((i <= 10 && i % 7 != 0) || (i % 10 == 0 && i % 7 != 0))
            sum += i * i;
        else if (i % 7 != 0 && b % 7 != 0 && a % 7 != 0)
            sum += i * i;
    }
    cout << sum << endl;
    return 0;
}