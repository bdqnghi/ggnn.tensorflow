
int main()
{
    char s[6] = {0,0,0,0,0,0};
    scanf("%s", &s);
    int i = 0;
    for ( i = 5; i >= 1 && s[i] == 0; i-- );
    for ( ; i >= 0; i-- )
        printf("%c", s[i]);
    return 0;
}
