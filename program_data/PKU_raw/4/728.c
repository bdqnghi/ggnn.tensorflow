int n, m, a[101][101], *p1, *p2, *p3, j, k;
int main()
{
    cin >> n >> m;
    for (p1 = *a, j = 0; j < n; ++ j, p1 += 101)
        for (p2 = p1, k = 0; k < m; ++ k, ++ p2)
            cin >> *p2;
    for (p2 = *a, j = 1; j <= m; ++ j, ++ p2)//??????0???????
        for (p3 = p2, k = min(j, n); k --; p3 += 100)
            cout << *p3 << endl;
    for (p2 += 100, j = n - 1; j; -- j, p2 += 101)//???????????????
        for (p3 = p2, k = min(m, j); k --; p3 += 100)
            cout << *p3 << endl;
    return 0;
}
