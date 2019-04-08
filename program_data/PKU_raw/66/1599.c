
void CaculateWeekDay(int y,int m, int d)
{
    if(m==1||m==2) {
        m+=12;
        y--;
    }
    int iWeek=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    switch(iWeek)
    {
    case 0: cout <<"Mon."<<endl; break;
    case 1: cout <<"Tue."<<endl; break;
    case 2: cout <<"Wed."<<endl; break;
    case 3: cout <<"Thu."<<endl; break;
    case 4: cout <<"Fri."<<endl; break;
    case 5: cout <<"Sat."<<endl; break;
    case 6: cout <<"Sun."<<endl; break;
    }
} 
int main()
{
    int year,month,day;
    cin>>year;
    cin>>month;
    cin>>day;
    CaculateWeekDay(year,month,day);
    return 0;
}