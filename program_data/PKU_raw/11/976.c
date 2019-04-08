int main()
{
    int year,month,day,daynum=0,i;
    cin>>year>>month>>day;
    int month1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int month2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int judgeleap;
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        for(i=0;i<month-1;i++)
        {
            daynum+=month2[i];
        }
    }
    else
    {
        for(i=0;i<month-1;i++)
        {
            daynum+=month1[i];
        }
    }
    daynum=daynum+day;
    cout<<daynum;
    return 0;
}