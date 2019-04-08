int main()
{
    char temp,s;
    int i,j,t[27][2000],m,n,a[27] = {0},num[2000],x;
    {
        cin >> n;
        for (i = 1; i <= n; i++ )
        {
            cin >> num[i];
            temp = cin.get();
            while (temp == '\n' || temp == ' ' )
            {
                temp = cin.get();
            }
            for (j = 1; 1; j++ )
            {
                x = temp - 'A' + 1;
                t[x][a[x]] = num[i];
                a[x]++;
                temp = cin.get();
                if (temp == '\n')
                {
                    break;
                }
            }
        }
        m = 0;
        for (i = 1; i <= 26; i++)
        {
            if (a[i] > a[m])
            {
                m = i;
            }
        }
        s = m + 'A' - 1;
        cout << s << endl << a[m] << endl;
        for (i = 0; i < a[m]; i++)
        {
            cout << t[m][i] << endl;
        }
    }
}