int main()
{
    char str[150], x;
    cin.getline(str, 150);
    int len = strlen(str);
    char *p = str;
    for (; p < &str[len-1]; p++)
    {
        x = *p + *(p + 1);
        cout << x;
    }
    x = str[len-1] + str[0];
    cout << x << endl;
    return 0;
}