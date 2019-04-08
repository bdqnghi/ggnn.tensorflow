int main()
{
    int n,i,len,j,c[600] = {0},max = 0;
    char a[600],*p,b[600][5];
    cin >> n;
    cin.get();//???? 
    p = a;
    cin.getline(p,600);
    len = strlen(p);
    for (i = 0;i <= len - n;i++)//?????n????????????b? 
        for (j = 1;j <= n;j++)
        {
            b[i][j] = *(p + i + j - 1);
        }
    for (i = 0;i < len - n;i++)
        for (j = i + 1;j <= len - n;j++)//?????????????n????? 
            for (int k = 1;k <= n;k++)//????????????? 
            {
                if (b[i][k] - b[j][k] != 0)
                break;
                if (k == n)//????????????????c???? 
                c[i]++;
            }
    for (i = 0;i <= len - n;i++)
    {
        if (c[i] > max)
        max = c[i];
    }
    if (max == 0)//??c??????????????????1?????0???NO 
    cout << "NO";
    else
    {
        cout << max + 1 << endl;//??????????? 
        for (i = 0;i <= len - n;i++)
        {
            if (c[i] == max)//?????????max???????? 
            {
                     for (j = 1;j <= n;j++)
                     {
                         if (j == n)
                         cout << b[i][j] << endl;
                         else 
                         cout << b[i][j];
                     }
            }
        }
    }
    return 0;
}
      