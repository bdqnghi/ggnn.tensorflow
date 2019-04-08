int main()
{
    char s[101], a[101], b[101], c[203];
    s[0] = a[0] = b[0] = ' ';
    gets(&s[1]);
    cin >> &a[1] >> &b[1];
    int slen = strlen(s) + 1,
        alen = strlen(a) + 1,
        blen = strlen(b) + 1;
    s[slen - 1] = a[alen - 1] = b[blen - 1] = ' ';
    s[slen] = a[alen] = b[blen] = '\0';
    int i, j;
    for (i=0, j=0; i<slen; ++i, ++j)
    {
        if (strncmp(s+i, a, alen) == 0)
        {
            strcpy(c+j, b);
            i = i + alen - 1;
            j = j + blen - 1;
        }
        else
        {
            c[j] = s[i];
        }
    }
    c[j-1] = 0;
    cout << &c[1] << endl;
    return 0;
}
