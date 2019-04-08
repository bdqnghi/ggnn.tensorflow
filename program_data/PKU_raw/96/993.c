int main()
{
    int i, j;
    char zheng[100]; 
    int shang[100], yushu;
    cin.getline(zheng, 100);
    int len = strlen(zheng);
    yushu = zheng[0] - '0';
    if (len == 1)
    {
        cout << 0 << endl <<  yushu << endl;
    }
    else
    {
        if (len == 2 && yushu * 10 + zheng[1] - '0' < 13)
        {
            cout << 0 << endl << yushu * 10 + zheng[1] - '0' << endl;
        }
        else
        {
            if (yushu * 10 + zheng[1] - '0' < 13)
            {
                yushu = yushu * 10 + zheng[1] - '0';
                j = 0;
                for (i = 2; i < len; i++)
                {
                     shang[j++] = (yushu * 10 + zheng[i] - '0') / 13;
                     yushu = (yushu * 10 + zheng[i] - '0') % 13;
                }
                for (i = 0; i < j; i++)
                {
                     cout << shang[i];
                }
                cout << endl << yushu;
            }
            else
            {
                j = 0;
                for (i = 1; i < len; i++)
                {
                    shang[j++] = (yushu * 10 + zheng[i] - '0') / 13;
                     yushu = (yushu * 10 + zheng[i] - '0') % 13;
                }
                for (i = 0; i < j; i++)
                {
                     cout << shang[i];
                }
                cout << endl << yushu;
            }
        }
    }
    return 0;
}
     
