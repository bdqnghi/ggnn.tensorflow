
int main()
{
    char s[10];
    scanf("%s", &s);
    int n = 0, i = 0;
    for ( i = 0; s[i]!='\0'; i++ )
        n++;
    for ( i = n-1; i >= 0; i-- )
        printf("%c", s[i]);
    return 0;
}
