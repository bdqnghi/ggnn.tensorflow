

int f(int a, int b)
{
    int k = 0;
    if (a >= 2 * b)
    {
        for (int i = b; i <= a / b; i++)
        {
            if (a % i == 0 && a/i >= i)
            {
                k += f(a/i, i) + 1;
            }
        }
    }
    else
    {
        k = 0;
    }
    return k;
}

int main()
{
    int n, a, t;
    cin >> n;
    while (n--)
    {
        cin >> a;
        t = f(a, 2) + 1;
        cout << t << endl;
    }
    return 0;
}
