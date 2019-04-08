
int main()
{
    int n, i, j, cnt = 0;
    cin >> n;
    int a[100], b[100], c[100];
    char num1[101], num2[101];
    while(cnt < n)
    {
        cin >> num1;
        cin >> num2;
        int len1 = strlen(num1);
        int len2 = strlen(num2);
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        j = 0;
        for(i = len1 - 1; i >= 0; i--)
            a[j++] = num1[i] - '0';
        j = 0;
        for(i = len2 - 1; i >= 0; i--)
            b[j++] = num2[i] - '0';
        for(i = 0; i < len2; i++)
        {
            if(a[i] < b[i])
            {
                if(a[i] == -1)
                    a[i] = 9;
                else
                    a[i] += 10;
                a[i + 1]--;
            }
            c[i] = a[i] - b[i];
        }
        if(len1 > len2)
        {
            for(i = len2; i < len1; i++)
                c[i] = a[i];
        }
        for(i = len1 - 1; i >= 0; i--)
        {
            if(c[i] != 0)
                break;
        }
        for( ; i >= 0; i--)
            cout << c[i];
        cout << endl;
        cnt++;
    }
    return 0;
}
