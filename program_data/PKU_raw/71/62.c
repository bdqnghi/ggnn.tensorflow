int mon;
int day(),month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
    int i,j,n,year,month1,month2,days1,days2,daysbetween;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d %d %d",&year,&month1,&month2);
         if((year%4==0 && year%100!=0) || year%400==0)
               month[1]++;
         days1=day(month1);
         days2=day(month2);
         daysbetween=days1-days2;
         if(daysbetween%7==0)
               printf("YES\n");
         else
               printf("NO\n");
         month[1]=28;
    }
    return 0;
}

int day(int mon){
    int k,days=0;
    for(k=0;k<mon-1;k++)
       days+=month[k];
    return days;
}
