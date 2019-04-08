 
int f(int, int);
 
int main()
{
    int t, m, n, sum;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &m, &n);
        sum = f(m, n);
        printf("%d\n", sum);
    }
    return 0;
}
int f(int m, int n)
{
    if (m < 0) return 0;
    if (m == 0) return 1;
    if (n == 1) return 1;
    return f(m - n, n) + f(m, n - 1);   
}