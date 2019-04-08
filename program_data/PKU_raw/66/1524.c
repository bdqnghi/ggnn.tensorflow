int doublemonth(int n);
int whichmonth(int n,int m);
int main()
{
    int m,n,p,q,day;
    char *weekday[]={"Sun.","Mon.","Tue.","Wen.","Thu.","Fri.","Sat."};
    day=0;
    //printf("?????????????????????????????????\n");
    scanf("%d %d %d",&n,&q,&p);
    if(doublemonth(n))
    {
                 m=(n%7+n/4-n/100+n/400-1)%7;//???7????2??1 
                 day=whichmonth(q-1,0)+p-1;                
    }         
    else 
    {
         m=(n%7+n/4-n/100+n/400)%7;
         day=whichmonth(q-1,1)+p-1;
    }
    day=(day+m)%7;
    printf("%s\n",weekday[day]);              
    return 0;
}
int doublemonth (int n)
{
    if((!(n%4))&&(n%100))return 1;
    else if(!(n%400))return 1;
    else return 0;
}

int whichmonth(int n,int m)
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,day;
    day=0;
    for(i=0;i<n;i++)
    {
                    if(m)day=day+month[i];
                    else 
                    {
                         if(i==1)day=day+month[i]+1;
                         else day=day+month[i];
                    }
    }
    return day;
}
               