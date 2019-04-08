int main ()
{
    char flag[10];
    float temp;
    float boy[1000], girl[1000];
    int k, i, j = 0, z = 0, lenb = 0, leng = 0, n;
    cin >> n;
    for (k = 0 ; k < n; k++)
    {
        cin >> flag;
        if (strcmp(flag, "female") == 0)
        {
            leng++;
            cin >> girl[j++];
        }
        else
        {
            lenb++;
            cin >> boy[z++];
        }
    }
    for (i = 0; i < lenb - 1; i++)
        for (j = 0; j < lenb - 1 - i; j++)
        {
            if (boy[j] > boy[j + 1])
            {
                temp = boy[j]; boy[j] = boy[j + 1]; boy[j + 1] = temp;
            }
        }
    
    for (i = 0; i < leng - 1; i++)
        for (j = 0; j < leng - 1 - i; j++)
        {
            if (girl[j] < girl[j + 1])
            {
                temp = girl[j]; girl[j] = girl[j + 1]; girl[j + 1] = temp;
            }
        }
    cout << fixed;
    for (i = 0; i < lenb; i++)
        cout << setprecision(2) << boy[i] << ' ';
    for (i = 0; i < leng - 1; i++)
        cout << setprecision(2) << girl[i] << ' ';
    
    cout << setprecision(2) << girl[i];
    
    return 0;
}

