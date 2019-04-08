int main ()
{
    char a[101],flag[2];
    int t, i, j, k;
    cin.getline(a, 101);
    flag[0] = a[0];
    j = strlen(a);
    for (i = 0; i < j; i++)
    {
        if (a[i] != flag[0] && a[i]!= '0')
        {
            for (k = i - 1; k >= 0; k--)
            {
                if (a[k] == flag[0])
                {
                    cout << k << " "<< i << endl;
                    a[i] = '0';
                    a[k] = '0';
                    break;
                }
            }
        }
    }
    return 0;
}