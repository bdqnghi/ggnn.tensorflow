int year[2]={365,366};
int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,
                  31,29,31,30,31,30,31,31,30,31,30,31};
               


int main()
{
    int y1,m1,d1,y2,m2,d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    int ans=0;
    while(y1!=y2 || m1!=m2 || d1!=d2)
    {
           ans++;
           d1++;
           int leapyear=((y1%4==0&&y1%100!=0) || y1%400==0);
           if(d1>month[leapyear][m1-1])
            { d1=1; m1++;}
           if(m1>12) 
           { m1=1;y1++;}
    }
    cout<<ans<<endl;
    return 0;
}
           
           
               
