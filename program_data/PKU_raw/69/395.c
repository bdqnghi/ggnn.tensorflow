int max(int a, int b)
{
    if(a > b) return a;
    else return b;
}
int main()
{
    int a[260] = {0}, b[260] = {0}, carry = 0, c[260] = {0}, i, j;
    char s1[260], s2[260];
    cin >> s1 >> s2;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int len = max(len1, len2);
    for(i = len1 - 1, j = 0; i >= 0; --i, ++j)
    {
        a[i] = s1[j] - '0';
    }
    for(i = len2 - 1, j = 0; i >= 0; --i, ++j)
    {
        b[i] = s2[j] - '0';
    }
    for(i = 0; i < len + 1; ++i)
    {
        c[i] = a[i] + b[i] + carry;
        if(c[i] >= 10)
        {
            carry = 1;
            c[i] -= 10;
        }
        else carry = 0;
    }
    int judge = 0;
    /*for(i = len; c[i] == 0; --i);
    cout << i << endl;
    if(1) cout << 0;
    else*/
    for(;i >=0; --i)
    {
        if(c[i] != 0 || (c[i] == 0 && i == 0)) judge = 1;
        if(judge == 1) cout << c[i];
    }
    return 0;
}
