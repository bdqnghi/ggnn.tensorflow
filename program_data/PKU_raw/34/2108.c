int jg(int);
int main()
{
    int n;
    cin >> n;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            cout << n << "/" << 2 << "=" << jg(n) << endl;
        }
        if(n % 2 != 0)
        {
            cout << n << "*" << 3 << "+" << 1 << "=" << jg(n) << endl;
        }
        n = jg(n);
    }
    cout << "End";

    return 0;
}

int jg(int x)
{
    if(x % 2 == 0)
    {
        return x / 2;     
    }
    else
    return 3 * x + 1;
}