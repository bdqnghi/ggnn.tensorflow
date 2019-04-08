int main()
{
    int str[301], n, i, j, temp, flag = 0; 
    double count = 0, max_num;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> str[i];
    for (i = n; i >= 2; i--)
        for (j = 2; j <= i; j++)
            if (str[j] < str[j - 1])
            {
                temp = str[j - 1];
                str[j - 1] = str[j];
                str[j] = temp;
            }
    for (i = 1; i <= n; i++)
        count += str[i];
    max_num = max(str[n] - count / n, count / n - str[1]);
    for (i = 1; i <= n; i++)
        if (fabs(str[i] - count / n) > max_num || fabs(fabs(str[i] - count / n) - max_num) <= 1e-5)
        {
            if (flag == 0)
            {
               cout << str[i];
               flag = 1;
            }
            else
                cout << "," << str[i];
        }
    //while (1);
    return 0;
}