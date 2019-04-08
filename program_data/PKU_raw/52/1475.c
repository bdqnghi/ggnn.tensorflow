
main()
{
    int a[101];
    int n,m,i, p;
    
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++)
    {
                     scanf("%d", &a[i]);
    }
    
    a[0] = a[n];
    for(i = 1;i <= n; i++)
    {
     p = (n - m + i) % n;
     printf("%d", a[p]);
     //printf("|%d|", n - m + i);
     if(i != n) printf(" ");
}
}
