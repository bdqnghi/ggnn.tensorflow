int main()
{
    int year,month,day;
    cin>>year>>month>>day;
    int num=0,days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    char date[12][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
    num=year%7+year/4-year/100+year/400;
    for (int i=1;i<month;i++){
        num+=days[i];
        }
    if ((((year%4)==0&&year%100!=0)||year%400==0)&&month<=2){
                                                        num--;
                                                        }
    
    num+=day-1;
    cout<<date[num%7]<<endl;
    
    return 0;
}