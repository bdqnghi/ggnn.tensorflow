int main()
{
    int n,i,j,l,k;
    char s[100];
    scanf("%d",&n);
    k=0;
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        if (k==0)
        {
            printf("%s",s);
            k=l;
            continue;
        }
        if (k+l<80)
        {
            printf(" %s",s);
            k=k+l+1;
            continue;
        }
        if (k+l>=80)
        {
            printf("\n%s",s);
            k=l;
            continue;
        }
    }    
    return 0;
}