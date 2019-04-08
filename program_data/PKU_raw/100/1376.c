int main()
{
    char ch, str[301];
    int i, len, no=1, counter[26]={0};
    /* ????? */
    scanf("%s", str);
    /* ???????? */
    len = strlen(str);
    /* ????????????? */
    for (i=0; i<len; i++) {
        ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            counter[ch-'a']++;
            no = 0;
        }
    }
    /* ???????? */
    for (ch='a'; ch<='z'; ch++) {
        if (counter[ch-'a'] > 0) {
            printf("%c=%d\n", ch, counter[ch-'a']);
        }
    }
    /* ??????????o */
    if (no) {
        printf("No");
    }
    return 0;
}
