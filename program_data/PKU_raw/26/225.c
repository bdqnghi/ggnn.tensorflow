// ?????? ???1000010500 
// ??????? 
// 2010-12-8


int main()
{
    char str[100];
    char *p;
    int flag = 0;                                   // flag??????????? 
    gets(str);
    for (p = str;*p != '\0';p++)
    {
        if (*p == ' ' && flag == 0)                 // ????? 
        {
            flag = 1;
            continue;
        }
        if (*p == ' ' && flag == 1)                 // ????????????? 
        {
            *p = '1';                               // ????????? 
            continue;
        }
        if (*p != ' ')
            flag = 0;
    }
    for (p = str;*p != '\0';p++)
        if (*p != '1')
            cout << *p;
    return 0;
}
