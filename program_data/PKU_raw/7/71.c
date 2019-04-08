
int main()
{
    char s[256], sub[256], rep[256];
    int i, j, k;
    int lens, lensub;

    gets(s), gets(sub), gets(rep);
    lens = strlen(s);
    lensub = strlen(sub);

    for (i=0; i<=lens-lensub; i++) {
        for (j=0; j<lensub; j++)
            if (s[i+j] != sub[j])
                break;
        if (j == lensub) {
            for (k=0; k<j; k++)
                s[i+k] = '@';
            i += j-1;
            break; // ??????????????????????
        }
    }

    for (i=0; i<lens; i++)
        if (s[i] == '@') {
            while (s[i] == '@') i++;
            i--; 
            printf("%s", rep);
        } else {
            printf("%c", s[i]);
        }

    return 0;
}
