int main()
{
    int n, i = 1, sum = 0, a, b;
    cin >> n;
    
    for (i; i <= n; i++)
    {
        b = i % 10;
        a = (i - b) / 10;
        if (i % 7 == 0 || a == 7 || b == 7)
            sum = sum;
        else
            sum = sum + i * i;
    }
    cout << sum << endl;
}