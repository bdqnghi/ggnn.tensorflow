int main()
{
    char str[1000];
    memset(str, 0, sizeof(str));
    cin.getline(str, 1000, '\n');
    for (int i = 0; str[i]; i ++)
    {
        if (str[i] != ' ')
            cout << str[i];
        else
        {
            if (str[i + 1] != ' ')
                cout << str[i];
         }
    }
    cout << endl;
    return 0;
}