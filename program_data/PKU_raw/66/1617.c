int main()
{
    int y,m,d,daysum=0;
    cin>>y>>m>>d;
    int daynor[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int dayleap[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    daysum=(((y-1)%7)*(365%7)%7)+((y-1)/4)%7-((y-1)/100)%7+((y-1)/400)%7;
    if((y%4!=0)||((y%100==0)&&(y%400!=0)))
       for(int i=0;i<m;i++)
          daysum += (daynor[i]%7);
    else
       for(int i=0;i<m;i++)
          daysum += (dayleap[i]%7);
    daysum += (d%7);
    if(daysum%7==0)   cout<<"Sun."<<endl;
    else if(daysum%7==1)    cout<<"Mon."<<endl;
    else if(daysum%7==2)    cout<<"Tue."<<endl;
    else if(daysum%7==3)    cout<<"Wed."<<endl;
    else if(daysum%7==4)    cout<<"Thu."<<endl;
    else if(daysum%7==5)    cout<<"Fri."<<endl;
    else if(daysum%7==6)    cout<<"Sat."<<endl;

    return 0;
}
