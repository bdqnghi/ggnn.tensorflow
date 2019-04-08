int main()
{
    int n,c=0;
    scanf("%d",&n);
    char s[41];
    scanf("%s",s);
    printf("%s",s);
    n--;
    c=strlen(s)+1;
    while(n--)
    {
        scanf("%s",s);
        c+=strlen(s);
        if(c>80)
        {
            c=strlen(s)+1;
            printf("\n");
            printf("%s",s);
        }
        else
        {
            printf(" %s",s);
            c++;
        }
    }
}

