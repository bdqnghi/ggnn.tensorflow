int main()
{
    char str[101],a[101];
    int n,i,j,k;
    gets(str);
    n=strlen(str);
    j=0;

    for (i=0;i<n;i++)
    {
        if (str[i]!=' ')
            printf("%c",str[i]);
            if (str[i]==' ')
            {
                if (str[i+1]!=' ')
                    printf(" ");
                }
    }
    return 0;
}