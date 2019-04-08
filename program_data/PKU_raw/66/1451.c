const int date[4]={0,5,3,1};
int isleapyear(int x)
{
 int mark=0;
 if(x%400==0||(x%100!=0&&x%4==0))
  mark=1;
 return mark;
}
void prt(int x)
{
 switch(x)
 {
 case 0 :cout<<"Mon.";break; 
 case 1 :cout<<"Tue.";break; 
 case 2 :cout<<"Wed.";break; 
 case 3 :cout<<"Thu.";break; 
 case 4 :cout<<"Fri.";break; 
 case 5 :cout<<"Sat.";break; 
 case 6 :cout<<"Sun.";break;
 }
}
const int monthday[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,};
const int yearday[2]={365,366};
int main()
{
 int year,month,day;
 cin>>year>>month>>day;
  int daycount=0,temp;
 temp=isleapyear(year);
 int temp0=(year-1)/100%4;
 year=(year-1)%100+1;
 if(year==0) year=100;
 for(int i=0;i<year-1;i++)
  daycount+=yearday[isleapyear(i+1)];
 for(int j=0;j<month-1;j++)
  daycount+=monthday[temp][j];
 daycount+=day;
 int ans;
 ans=(date[temp0]+daycount-1)%7;
 prt(ans);
 return 0;
}