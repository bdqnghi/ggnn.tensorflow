int n,k,cnt;
int f(int a)
{
    if (a == 1)
    return n * cnt + k;
    int d = n * f(a - 1);
    if (d % (n - 1) == 0 && d != 0)
    return n * f(a - 1) / (n - 1) + k;
    else 
    return 0;
}
int main()
{
    int c;
    cin >> n >> k;
    for (cnt = 1;;cnt++)
    {
        c = f(n);
        if (c != 0)
        break;
    }
    cout << c << endl;
   
    return 0; 
}
