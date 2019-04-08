int m;
int num(int, int, int);
int main(void)
{
    int n, i, j;
    cin >> m >> n;
    for( i = 1 ; i < 10 ; i++ )
    {
        for( j = 1 ; j < 9 ; j++ )
            cout << num(n, i, j) << " ";
        cout << num(n, i, 9) << endl;
    }
    return 0;
}
int num(int a, int x, int y)
{
    if( a == 0 )
    {
        if( x == 5 && y == 5 )
            return m;
        else
            return 0;
    }
    else
        return num(a - 1, x, y) * 2 + num(a - 1, x - 1, y - 1) + num(a - 1, x - 1, y) + num(a - 1, x - 1, y + 1) + num(a - 1, x, y - 1) + num(a - 1, x, y + 1) + num(a - 1, x + 1, y - 1) + num(a - 1, x + 1, y) + num(a - 1, x + 1, y + 1);
}