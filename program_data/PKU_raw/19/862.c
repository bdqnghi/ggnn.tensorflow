
int main()
{
    char st[101];
    char word1[101], word2[101];
    int match[101];
    
    memset(match, 1, sizeof(match));
    
    gets(st);
    gets(word1);
    gets(word2);
    
    int len1 = strlen(st), len2 = strlen(word1), len3 = strlen(word2);
    
    int i, j, k;
    for (i = 0; i < len1; i++) {
        if ((i == 0 || st[i-1] == ' ') && i+len2 <= len1) {
            for (j = 0; j < len2; j++) {
                if (st[i+j] != word1[j])
                    match[i] = 0;
            }
        }
    }
    
    for (i = 0; i < len1; i++) {
        if (!match[i]) {
            for (j = i; j < len1; j++) {
                putchar(st[j]);
                if (st[j] == ' ') break;
            }
            i = j;
        } else {
            i += len2;
            printf("%s", word2);
            if (i < len1) putchar(' ');
        }
    }
    puts("");
    
    return 0;
}