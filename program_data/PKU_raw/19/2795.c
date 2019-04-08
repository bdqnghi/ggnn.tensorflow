int main()
{
    char s[103], a[103], b[103], s2[210];
	int alen,slen,blen,i,j;
    s[0] = a[0] = b[0] = ' ';
    gets(&s[1]);
    cin >> &a[1] >> &b[1];
    slen = strlen(s);
    alen = strlen(a);
    blen = strlen(b);
    s[slen] = a[alen] = b[blen] = ' ';
    s[slen+1] = a[alen+1] = b[blen+1] = '\0';
    for (i=0, j=0; i<=slen; i++, j++)
    {
        if (strncmp(s+i, a, alen+1) == 0)
        {
            strcpy(s2+j, b);
            i = i + alen;
            j = j + blen;
        }
        else
        {
            s2[j] = s[i];
        }
    }

    s2[j-1] = 0;
    cout << &s2[1] << endl;
    return 0;
}


