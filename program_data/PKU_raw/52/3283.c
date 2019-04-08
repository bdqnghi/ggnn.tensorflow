int a[100],n,m;
int main()
{
    int i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n-m;i++)
    {
        scanf("%d",a+m+i);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i<n-1)   putchar(' ');
    }
    putchar('\n');
    return 0;
}
