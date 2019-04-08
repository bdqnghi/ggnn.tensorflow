int main()
{
    char str[500];
    cin >> str;
    int l = strlen(str), i, j, m = 1, count = 0;
    for (m = 1; m < l; m++)
    {
        for (i = 0; i < l - m; i++)
        {
            count = 0;
            for (j = 0; j <= m / 2 + 1; j++)
            {
                if (str[i + j] != str[i + m - j])
                    continue;
                else
                    count++;
            }
            if (count >= j)
            {
                for (j = i; j <= i + m; j++)
                    cout << str[j];
                cout << endl;
            }
        }
    }
    return 0;
}