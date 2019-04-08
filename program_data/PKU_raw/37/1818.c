
int main()
{
    char str[100000];
    int t, i, k, cnt = 0, flag1 = 0, flag2 = 0, a[100000];
    cin >> t;
    while(cnt < t)
    {
        memset(a, 0, sizeof(a));
        cin >> str;
        flag1 = 0, flag2 = 0;
        int len = strlen(str);
        a[0] = 1;
        for(i = 1; i < len; i++)
        {
            for(k = 0; k < i; k++)
            {
                flag1 = 0;
                if(str[i] == str[k])
                    {
                        a[k]++;
                        flag1 = 1;
                        break;
                    }
            }
            if(!flag1)
                a[i]++;
        }
        for(i = 0; i < len; i++)
            if(a[i] == 1)
           {
            cout << str[i] << endl;
            flag2 = 1;
            break;
           }
        if(!flag2)
            cout << "no" << endl;
        cnt++;
    }
    return 0;
}
