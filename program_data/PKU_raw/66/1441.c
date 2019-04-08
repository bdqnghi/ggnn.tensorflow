int run(int a)
{
    int b=0;
    if(a%4!=0){}
    else
    {
        if(a%100==0)
        {
                    if(a%400==0) b=1;
                    else b=0;
        }
        else b=1;
    }
    return b;
}
long int tian(long int a,long int b,long int c)
{
    long int s=0,i=0;
    for(i=1;i<=a-1;i++)
    {
                     s=s+365+run(i);s=s%7;
    }
    for(i=1;i<=b-1;i++)
    {
                       if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) s=s+31;
                       else 
                       if(i==2)
                       {
                              if(run(a)==1) s=s+29;
                              else s=s+28;
                       }
                       else s=s+30;
    }
    s=s+c-1;
}
int main()
{
    long int a,b,c,l,n;cin>>a>>b>>c;a=a%400;if(a==0) a=400;
    l=tian(a,b,c);
    n=l%7;
    if(n==0) cout<<"Mon.";if(n==1) cout<<"Tue.";if(n==2) cout<<"Wed.";if(n==3) cout<<"Thu.";if(n==4) cout<<"Fri.";if(n==5) cout<<"Sat.";if(n==6) cout<<"Sun.";
    return 0;
}
