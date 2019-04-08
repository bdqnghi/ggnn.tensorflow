
int n, k, r;

int main()
{
    int num(int, int);
    
    cin >> n >> k;
    r = k + n;
    while(num(n, r) == 0)
    {
        r = n + r;
    }
    cout << num(n, r) << endl;
    
    return 0;
}

int num(int a, int b)
{
    if(a == 1) return b;
    else
    {
        if(b % (n - 1) == 0)
        {
            b = b * n / (n - 1) + k;
            return num(a - 1, b);
        }
        
        else
        {
            return 0;
        }
    }
}