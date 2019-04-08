
int main()
{
    int n = 0;
    char s[501] = {0};
    char word[501][6] = {0};
    int count[501] = {0};
    int top = 0;
    scanf("%d\n", &n);
    gets(s);
    int i = 0, j = 0, len = strlen(s);
    int maxcount = 0;
    for ( i = 0; i < len - n+1; i++ )
    {
        for ( j = 0; j < n; j++ )
            word[top][j] = s[j+i];
        word[top][n] = '\0';
        for ( j = top -1; j >= 0; j-- )
        {
            if ( strcmp( word[j], word[top] ) == 0 )
            {
                count[j]++;
                if ( maxcount < count[j] )
                    maxcount = count[j];
                break;
            }
        }
        if ( j < 0 )
        {
            count[top] = 1;
            if ( maxcount < count[top] )
                maxcount = count[top];
            top++;
        }
    }
    if ( maxcount <= 1 )
    {
        printf("NO");
        return 0;
    }
    printf("%d", maxcount);
    for ( i = 0; i < len - n + 1; i++ )
    {
        if ( count[i] == maxcount )
            printf("\n%s", word[i] );
    }
    return 0;
}
