/*
*???   5(1)
*??     ???
*??     2012?10?22?
*???   ???
*/ 
int main()
{
    int year[201], n, month1[201], month2[201], a[201], i, j;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> year[i] >> month1[i] >> month2[i];
        if((year[i] % 4 == 0 && year[i] % 100 != 0) || (year[i] % 400 == 0))
        {
            int day[12] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};// ???????????????
            a[i] = (day[month2[i] - 1] - day[month1[i] - 1]) % 7 == 0;
        }
        else
        {
            int day[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
            a[i] = (day[month2[i] - 1] - day[month1[i] - 1]) % 7 == 0;
        }
    }
    for(i = 1; i <= n; i++)
    {
        if(a[i])
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}
  