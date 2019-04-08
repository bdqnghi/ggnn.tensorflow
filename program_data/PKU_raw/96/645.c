int main()
{
    char a[100];
    int divide[100], mod;
    int len;
    cin >> a;
    len = strlen(a);
    if (len == 1)
    {
        cout << 0 << endl;
        cout << a[0];
    }
    else
    if(len == 2)
    {
        cout << (10 * (a[0] - '0') + (a[1] - '0')) / 13 << endl;
        cout << (10 * (a[0] - '0') + (a[1] - '0')) % 13;
    }
    else
    {
        divide[0] = (10 * (a[0] - '0') + (a[1] - '0')) / 13;
        mod = (10 * (a[0] - '0') + (a[1] - '0')) % 13;
        for (int i = 1; i < len - 1; i++)
        {
            divide[i] = (10 * mod + (a[i + 1] - '0')) / 13;
            mod = (10 * mod + (a[i + 1] - '0')) % 13;
        }
        if (divide[0])
            cout << divide[0];
        for (int i = 1; i < len - 2; i++)
        {
            cout << divide[i];
        }
            cout << divide[len - 2] << endl;
            cout << mod << endl;
    }
    return 0;
}  