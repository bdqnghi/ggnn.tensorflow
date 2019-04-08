int main()
{
    char str[120], *p;
    p = str;
    int boy[100];
    cin >> str;
    int m = 0, bo = 0;
    while(*p != 0)
    {
        if(*p == str[0])
        {
            bo++;
            boy[bo] = m;
        }
        else
        {
            cout << boy[bo] << " " << m << endl;
            bo--;
        }
        p++;
        m++;
    }
}
