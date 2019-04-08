//********************************
//*???????   **
//*?????? 1200012988 **
//*???2012.12.24  **
//********************************


int main()
{
    char str[256], sub[256], replace[20];
    char *p;
    int len1, len2, len3, i, m;
    cin >> str;
    cin >> sub;
    cin >> replace;
    len1 = strlen(str);
    len2 = strlen(sub);
    len3 = strlen(replace);
    p = strstr(str, sub);
    if(p != NULL)
    {
        if(len2 > len3)
        {
            m = len2 - len3;
            for(i = 0; i < len3; i++)
                *p++ = replace[i];
            for(i = 0; *(p + m + i) != str[len1 - 1]; i++)
                *p = *(p + m);
            len1 -= m;
        }
        if(len2 == len3)
        {
            for(i = 0; i < len3; i++)
                *p++ = replace[i];
        }
        if(len2 < len3)
        {
            m = len3 - len2;
            for(i = len1 - 1; str[i] != *(p + m - 1); i--)
                str[i + m] = str[i];
            for(i = 0; i < len3; i++)
                *p++ = replace[i];
            len1 += m;
        }
    }
    for(i = 0; i < len1; i++)
        cout << str[i];
    cout << endl;

    return 0;
}
