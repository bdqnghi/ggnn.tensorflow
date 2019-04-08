int main()
{
    int i=0,j=0;
    char s[100][100];
    while (scanf("%s",s[i])!=-1)
    {
        i++;
    }
    for (j=i-1;j>=1;j--)
    {
        printf("%s ",s[j]);
    }
    printf("%s",s[0]);

    return 0;
}
