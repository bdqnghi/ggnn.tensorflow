
int main()
{
    char a[105];
    int mark[105] = {0};
    while(cin.getline(a,101))
    {
        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] == '(')
            {
                mark[i] = 1;
            }
            if (a[i] == ')')
            {
                mark[i] = -1;
            }
        }
        for (int i = 1; i < strlen(a); i++)
        {
            if (mark[i] == -1)
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (mark[j] == 1)
                    {
                        mark[i] = 0;
                        mark[j] = 0;
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < strlen(a); i++)
            cout << a[i];
        cout << endl;
        for (int i = 0; i < strlen(a); i++)
        {
            if (mark[i] == 0) cout << " ";
            else if (mark[i] == 1) cout << "$";
            else cout << "?";
        }
        cout << endl;
        for (int i = 0; i < strlen(a); i++)
            mark[i] = 0;
    }
    return 0;
}
