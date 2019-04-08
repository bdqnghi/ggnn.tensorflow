char c[101], *p;
int s;
int main()
{
    cin.getline(c, 101);
    s = -1;//?s????????????????????
    p = c;
    do
    {
        if (*p <= '9' && *p >= '0')//??????????s??
        {
            if (s == -1)
                s = 0;
            s = s * 10 + *p - '0';
        }
        else//????????????
        {
            if (s != -1)
                cout << s << endl;
            s = -1;
        }
    }while(*p++);
    return 0;
}
