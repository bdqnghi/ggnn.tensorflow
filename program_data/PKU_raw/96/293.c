int main()
{
    char test[100] , tem[100];
    int len , i , j , flag = 0;
    int q , r = 0;
    while(cin >> test)
    {
        len = strlen(test);
        for (i = 0 ; i <= len - 1 ; i++)
        {
           r =10 * r + test[i] - '0';
           if (((r / 13) != 0)&&(!flag))
           {
               q = i;
               flag = 1;
           }
           if (flag)
           {
               tem[i - q] = r / 13 + '0';
           }
           r = r % 13;
        }
        if (flag == 0)
        {
            cout << '0';
        }
        else
        {
            for (i = 0 ; i <= len - 1 - q ; i++)
           {
             cout << tem[i];
           }
        }
        cout << endl;
        cout << r << endl;
    }
    return 0;
}

