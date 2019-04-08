int main()
{
    int runday[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int brunday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year1, year2, month1, month2, day1, day2, i, j, sum = 0;
    cin >> year1 >> month1 >> day1;
    cin >> year2 >> month2 >> day2;
    for ( i = year1; i < year2; i++ )
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
           sum = sum + 366;
        else
            sum = sum + 365;
    }
    if ((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
    {
        for ( i = 1; i < month1; i++ )
        {
            sum = sum - runday[i];
        }
        sum = sum - day1;
    }
    else
    {
        for ( i = 1; i < month1; i++ )
        {
            sum = sum - brunday[i];
        }
        sum = sum - day1;
    }
    if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
    {
        for ( i = 1; i < month2; i++ )
        {
            sum = sum + runday[i];
        }
        sum = sum + day2;
    }
    else
    {
        for ( i = 1; i < month2; i++ )
        {
            sum = sum + brunday[i];
        }
        sum = sum + day2;
    }
    cout << sum << endl;
    return 0;
}
