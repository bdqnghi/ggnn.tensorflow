
int main()
{
    int i, n, suffixLen;
    char word[32], *p;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        // ?????????
        scanf("%s", word);

        // ????p????
        for (p = word; *p; p++);

        // ??????????????
        switch (*(p-1)) 
        {
        case 'r': suffixLen = 2; break; // er
        case 'y': suffixLen = 2; break;    // ly
        case 'g': suffixLen = 3; break; // ing
        }

        // ????????????0??????
        *(p-suffixLen) = '\0';

        // ???????????
        printf("%s\n", word);
    }
    return 0;
}