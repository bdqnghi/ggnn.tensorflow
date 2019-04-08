int main()
{
    int month1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}, month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int startYear, startMonth, startDay;
    int endYear, endMonth, endDay;
    int deltaDay = 0, i = 0;
    int day1 = 0, day2 = 0, day = 0;

    cin >> startYear >> startMonth >> startDay;
    cin >> endYear >> endMonth >> endDay;


    for(i = startYear; i < endYear; i++)
    {
        if((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0))
        day = day + 366;
        else
        day = day + 365;
    }


    i = startYear;
    if((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0))
    {
        for(int j = 1; j < startMonth; j++)
        {
            day1 = day1 + month2[j];
        }
    }
    else
    {
        for(int j = 1; j < startMonth; j++)
        {
            day1 = day1 + month1[j];
        }
    }
    day1 = day1 + startDay;

    i = endYear;
    if((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0))
    {
        for(int j = 1; j < endMonth; j++)
        {
            day2 = day2 + month2[j];
        }
    }
    else
    {
        for(int j = 1; j < endMonth; j++)
        {
            day2 = day2 + month1[j];
        }
    }
    day2 = day2 + endDay;


    deltaDay = day2 - day1 + day;

    cout << deltaDay;


    return 0;
}
