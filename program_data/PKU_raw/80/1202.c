int main()
{
    int i, j;
    int count1 = 0, count2 = 0;
    int year1, month1, day1, year2, month2, day2;
    int month[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2;
    int leap1 = year1 % 400 == 0 || ((year1 % 4 == 0) && (year1 % 100 != 0));
    int leap2 = year2 % 400 == 0 || ((year2 % 4 == 0) && (year2 % 100 != 0));
    for (i = 1; i < month1; i++)
    {
         count1 += month[leap1][i];
    }
    count1 += day1 - 1;
    for (i = year1; i < year2; i++)
    {
        if (i % 400 == 0 || ((i % 4 == 0) && (i % 100 != 0)))
        {
            count2 += 366;
        }
        else
        {
            count2 += 365;
        }
    }
    for (i = 1; i < month2; i++)
    {
        count2 += month[leap2][i];
    }
    count2 += day2 - 1;
    cout << count2 - count1 << endl;
    return 0;
}    
