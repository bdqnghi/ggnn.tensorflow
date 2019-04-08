
int n, s1[MN], s2[MN];

int Cmp(int a, int b)
{
    if(s1[a] > s2[b])   return 200;
    if(s1[a] == s2[b]) return 0;
    return -200;
}

int main()
{
    int i , j, ans, k;
    while(scanf("%d", &n), n) {
        for(i = 0; i < n; i++)
            scanf("%d", s1 + i);
        for(i = 0; i < n ;i++) 
            scanf("%d", s2 + i);
        sort(s1, s1 + n);
        sort(s2, s2 + n);
        ans = -1000000;
        
        for(i = 0; i < n; i++) {
            k = 0;
            for(j = i; j < n; j++) 
                k += Cmp(j, j - i);
            k -= 200 * i;
            ans = max(ans, k);
        }        
        printf("%d\n", ans);
    }
}
