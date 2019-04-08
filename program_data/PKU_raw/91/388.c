int main()
{
    char s[101];
    char s1[101];
    gets(s);
    int a=(int)strlen(s);
    for (int b=0; b<a-1; b++) {
        s1[b]=s[b]+s[b+1];
    }
    s1[a-1]=s[a-1]+s[0];
    s1[a]='\0';
    printf("%s", s1);
    return 0;
}