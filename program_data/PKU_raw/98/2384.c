
int main()
{
    int n, i, j, count;
    char a[50], b[50];
    scanf("%d", &n);
    scanf("%s", a);
    printf("%s", a);
    count=strlen(a);
    for(i=2; i<=n; i++)
    {
        scanf("%s", a);
        if(a[0]=='k')
            printf("");
        count=count+1+strlen(a);
        if(count<=80)
        {
            printf(" %s", a);
        }
        else
        {
            printf("\n%s", a);
            count=strlen(a);
        }
    }
    printf("\n");
    return 0;
}
