/*
 *????match.cpp
 *??????
 *?????2012-11-27
 *???????????
 */



int len; // ?????
char st[101],ans[101]; // st????ans???

int work(int pos) // ??pos????????????????????
{
    for (int i=pos+1;i<len;i++)
        if (st[i]=='(') i=work(i); // ??
        else
            if (st[i]==')')
            {
                ans[pos]='('; // ????
                ans[i]=')';
                return i;
            }
    return len-1; // ???
}

int main()
{
    int i;
    while (cin >> st) // ??
    {
        cout << st << endl; // ??
        len=strlen(st);
        memset(ans,0,sizeof(ans)); // ???
        for (i=0;i<len;i++)
            if (st[i]=='(') i=work(i); // ??????
        for (i=0;i<len;i++)
            switch (st[i])
            {
                case '(':ans[i]=(ans[i]=='(') ? ' ' : '$';break; // ????
                case ')':ans[i]=(ans[i]==')') ? ' ' : '?';break;
                default :ans[i]=' ';
            }
        cout << ans << endl; // ??
    }
    return 0;
}
