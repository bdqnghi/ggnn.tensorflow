int main()
{
    int t, flag = 1;
    char z[10][100010] = {"0"};
    cin >> t;
    for (int i = 0; i < t; i++)
        cin >> z[i];
    for (int i = 0; i < t; i++)
    {
        flag = 1;
        int j = 0;
        for (; j < strlen(z[i]) && flag != 0; j++)
        {
            int s = 0;
            for (int k = 0; k < strlen(z[i]); k++)
                if ((z[i][j] - 'a') == (z[i][k] - 'a'))
                    s++;
            if (s == 1)
            {
                cout << z[i][j] << endl;
                flag = 0;
            }
        }
        if (j == strlen(z[i]) && flag != 0)
            cout << "no" << endl;
    }
    return 0;
}