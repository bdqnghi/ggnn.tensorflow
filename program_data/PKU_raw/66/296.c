
int LpYr(int yr);

int main()
{
    int y,m,d,i;
    int days,dayofwn;
    int daysofm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char dayofw[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
    scanf("%d%d%d",&y,&m,&d);
    
    days=(y-1)+(y-1)/4-(y-1)/100+(y-1)/400+d;
    for(i=0;i<m-1;i++)
    {
       days+=daysofm[i];
    }
    if(m>2) days+=LpYr(y);
    dayofwn=days%7;
    printf("%s\n",dayofw[dayofwn]);
    
  return 0;
}

int LpYr(int yr)
{
   return yr%100!=0&&yr%4==0||yr%400==0;
}