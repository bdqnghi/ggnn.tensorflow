
int test(int p)
{
    int i, m=(int)sqrt(p)+1;
    for(i=2; i<=m; i++)
    {
        if(p%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,i,flag;

    flag = 0;
    scanf("%d", &n);
    for(i=2; i+2<=n; i++)
    {
        if(test(i) && test(i+2))
        {
            flag = 1;
            printf("%d %d\n", i, i+2);
        }
    }
    if(!flag) printf("empty");
    return 0;
}
