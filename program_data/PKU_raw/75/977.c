int main()
{
    int a[1001],b[1001],c[1001] = {0},i,sum,k,j,m,s,max = 0;
    char d;
    for (i = 1;;i++)
    {
        cin >> a[i];
        d = cin.get();
        if (d != ',')
        break;
    }
    sum = i;
    for (k = 1;k <= i;k++)
    {
        cin >> b[k];
        d = cin.get();
    }
    for (j = 1;j <= i;j++)
        for (m = a[j];m < b[j];m++)//??c[m]??m???????? ????????????????
        {
           c[m]++;
        }
    for (s = 0;s <= 1000;s++)
    {
        if (c[s] >= max)
        max = c[s];
    }
    cout << sum << " " << max;
   
    return 0;
}