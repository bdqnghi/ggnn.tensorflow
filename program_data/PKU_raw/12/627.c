int main()
{
    int a[16] , i, j, k, temp, num[100];
    for(k = 0;k <= 99;k++)
    {
        num[k] = 0;
        for(i = 0;i <= 15;i++)
        {
            a[i] = 0;
        }
        for(i = 0;i <= 15;i++)
        {
            cin >> a[i];
            if (a[i] <= 0)
            break;
        }
        if(a[0] < 0)
        break;
        for(j = 0;j <= 13;j++)
        {
            for(i = 0;i <= 13 - j;i++)
            {
                if ( a[i] < a[i+1] )
                {
                    temp = a[i], a[i] = a[i+1], a[i+1] = temp;
                }
            }
        }
        for(i = 0;i <= 13;i++)
        {
            for(j = 1;j <= 14 - i; j++)
            {
                if(a[i] == 2 * a[i+j] && a[i+j] > 0)
                num[k] = num[k] + 1;
                else
                num[k] = num[k];
            }
        }
    }
    for(i = 0;i <= k-1;i++)
    {
    cout << num[i] << endl;
    }
}