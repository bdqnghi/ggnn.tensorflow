




int main()
{
    int n, i, j, k;
    int num1[110]; int num2[110];
    char str1[110]; char str2[110];
    cin >> n;
    getchar();
    for(i = 1; i <= n; i++)
    {
        j = 0;
        memset(num1, 0, sizeof(num1));
        memset(num2, 0, sizeof(num2));
        cin.getline(str1, 110);
        cin.getline(str2, 110);
        getchar();
        int l1 = strlen(str1);
        int l2 = strlen(str2);
        for(k = l1 - 1; k >= 0; k--)
            num1[j++] = str1[k] - '0';
        j = 0;
        for(k = l2 - 1; k >= 0; k--)
            num2[j++] = str2[k] - '0';
        for(k = 0; k < l2 || k < l1; k++)
        {
            num1[k] -= num2[k];
            if (k > 0 && num1[k - 1] < 0)
            {
                num1[k - 1] += 10;
                -- num1[k];
            }
        }
        k = 100;
        while (k > 0 && num1[k] == 0)
            -- k;
        for( ; k >= 0; k--)
            cout << num1[k];
        cout << endl;
    }
    return 0;
}
