int ss[2][12]={31,28,31,30,31,30,31,30,31,31,30,31,
               31,29,31,30,31,30,31,30,31,31,30,31};
char ans[7][20]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};

int main()
{
  
    long long year,month,day;
    cin>>year>>month>>day;
    long long leapyear=0;
   // for(int i=1;i<year;i++) 
    // if(i%400==0 || (i%100!=0 && i%4==0)) 
    //  leapyear++;
    leapyear=(year-1)/4-((year-1)/100-((year-1)/100)/4);
    long long sum=0;
    sum+=365*(year-1)+leapyear;
    int xx;
    for(int i=1;i<month;i++)
    {
            if(year%400==0 || (year%100!=0 && year%4==0))
            xx=1;
            else xx=0; 
            sum+=ss[xx][i-1];
    }
    sum+=day;
    cout<<ans[sum%7]<<endl;
    return 0;
}
    
    
