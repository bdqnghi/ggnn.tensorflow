
int main()
{
    int i, j, n, m, c, t;

    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        c = 60;
        scanf("%d",&m);
        for(j = 1; j <= m; j++)
        {
            scanf("%d",&t);
            if(t < c)
                c = (t + 3 > c) ? t : (c - 3);
        }
        printf("%d\n",c);
    }
    return 0;
}