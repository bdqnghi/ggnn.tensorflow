int month[2][12]={31,28,31,30,31,30,31,30,31,31,30,31,
                  31,29,31,30,31,30,31,30,31,31,30,31};
int main()
{
    int year,monthq,day;
    cin>>year>>monthq>>day;
    int ans=0;
    for(int i=1;i<monthq;i++)
    {
            int xx;
            if(year%400==0 || (year%4==0 && year%100!=0))
             xx=1;
            else xx=0;
            ans+=month[xx][i-1];
    }
    ans+=day;
    cout<<ans<<endl;
    return 0;
} 
    
