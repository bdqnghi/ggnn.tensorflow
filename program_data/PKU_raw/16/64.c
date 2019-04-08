int main()
{
    int i,l;
    char s[4],r[4];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
      r[i]=s[l-1-i];
    }
    for(i=0;i<l;i++)
    printf("%c",r[i]);
    getchar();
    getchar();
}