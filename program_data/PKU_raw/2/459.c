int main()
{
    int num[27] = {0};
    int n, i, j, temp;
    unsigned long len;
    char author[27], temp2, book[27][1000] = {'\0'};
    char str[4];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> str;    //??????
        cin.get();
        cin.getline(author, 27);
        len = strlen(author);           //???unsigned long ?????????????
        for (j = 0; j < len; j++)
        {
            num[author[j] - 'A']++;
            strncat(book[author[j] - 'A'], str, 3);    //??????????????????
        }
    }
    temp = 0;
    for (j = 0; j < 26; j++)
    {
        if (num[j] > temp)
        {
            temp = num[j];
            temp2 = j + 'A';
        }
    }
    cout << temp2 << endl << temp << endl;
    for (j = 0; j < temp; j++)
    {
        for (i = 0; i < 3; i++)
            cout << book[temp2 - 'A'][j * 3 + i];    //??temp2 - 'A'??? temp?j*3 + i ??j + i
        cout << endl;
    }
    return 0;
}