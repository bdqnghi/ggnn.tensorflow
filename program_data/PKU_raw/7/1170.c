
int main()
{
    char str[256], substr[256], replace[256];
    cin >> str >> substr >> replace;
    int lenstr = strlen(str), 
        lensubstr = strlen(substr), 
        lenreplace = strlen(replace);
    int i, j;
    int flag = 0; //flag=1???? 
    int pos; //???????????pos
    for (i = 0; i <= lenstr - lensubstr; i++)
    {
        for (j = 0; j < lensubstr; j++)
        {
            if (str[i + j] != substr[j]) //??????? 
                break; //????
        } 
        if (j == lensubstr) //????
        {
            pos = i; 
            flag = 1;
            break;
        }
    }
    if (flag) //???? 
    {
        for (i = 0; i < pos; i++)
            cout << str[i]; //??????????????
        cout << replace; //???????
        cout << (str + pos + lensubstr) << endl; //??????????
    }
    else cout << str << endl; //???????????? 
    return 0;
} 
