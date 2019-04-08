
int n , a[30] , f[30] , ans;

int main()
{
    scanf("%d" , &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d" , &a[i]);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j)
            if (a[j] >= a[i] && f[j] > f[i]) f[i] = f[j];
        f[i]++;
    }
    ans = 0;
    for (int i = 1; i <= n; ++i)
        if (f[i] > ans) ans = f[i];
    printf("%d\n" , ans);
}
