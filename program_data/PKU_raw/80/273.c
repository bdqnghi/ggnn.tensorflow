
double h,r;

int i,ans = 0,year1,year2,month1,month2,day1,day2,
    num_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    scanf("%d%d%d%d%d%d",&year1,&month1,&day1,
                         &year2,&month2,&day2);
    for(i = year1 + 1;i < year2;++i)
        if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
            ++ans;
    ans += 365 * (year2 - year1 - 1);
    for(i = 1;i <= month2 - 1;++i)
        ans += num_month[i];
    for(i = month1 + 1;i <= 12;++i)
        ans += num_month[i];
    ans += day2 + num_month[month1] - day1;
    if((year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0) && month1 <= 2)
        ++ans;
    if((year2 % 4 == 0 && year2 % 100 != 0 || year2 % 400 == 0) && month2 > 2)
        ++ans;
    printf("%d\n",ans);
    return 0;    
}