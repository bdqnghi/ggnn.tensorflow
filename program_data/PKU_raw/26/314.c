

int main()
{
    char str[100];
    gets(str);
    int len = strlen(str);
    for(int i = 0 ; i < len ; i++)
    {
        if(str[i] == ' ')
        {
            cout << str[i];
            while(str[++i] == ' ');
        }
        cout << str[i];
    }
    return 0;
}