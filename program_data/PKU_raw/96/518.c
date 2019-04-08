int main()
{
    char a[1000];
    int len, i, b[1000] = {0};
    cin.getline(a, 1000);
    len = strlen(a);
    for (i = 0; i < len; i++)
    {
        b[i] = a[i] - '0';     //????????????
    }
    for (i = 0; i < len; i++)
    {
        b[i + 1] = b[i] % 13 * 10 + b[i + 1];
        b[i] = b[i] / 13;
    }
    i = 0;
    while(1)
    {
        if (b[i] != 0)
            break;
        i++;
    }
    if (i == len)             //????0?
        cout << '0' << endl;
    else
    {
    for (; i < len; i++)
        cout << b[i];
        cout << endl;
    }
    cout << b[i] / 10;      //i ??? i+1
    return 0;
}