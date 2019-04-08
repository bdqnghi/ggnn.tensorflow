int main()
{
    int t, i, count[27] = {0}, j, a[1000] = {0}, k;
    char word[1000][1000], c[1000][2];
    cin >> t;
    for(i = 1;i <= t;i++)
    {
        cin >> word[i];
        for(j = 0;j < strlen(word[i]);j++)
        {
            count[word[i][j] - 96] = count[word[i][j] - 96] + 1;
        }
        for(j = 0;j < strlen(word[i]);j++)
        {
            if(count[word[i][j] - 96] == 1)
            {
               c[i][0] = word[i][j];
               a[i] = 1;
               break;
            }
        }
        if(a[i] == 0)
        {
             c[i][0] = 110;
             c[i][1] = 111;
        }
        for(j = 0;j <= 26;j++)
        {count[j] = 0;}
    }
    for(i = 1;i <= t;i++)
    {
        if(a[i] == 1)
        {cout << c[i][0] << endl;}
        if(a[i] == 0)
        {cout << c[i] << endl;}
    }
}