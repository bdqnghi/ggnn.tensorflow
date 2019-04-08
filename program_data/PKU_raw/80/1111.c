int main()
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,k,sum,startyear,startmonth,startday,endyear,endmonth,endday;
    scanf("%d %d %d",&startyear,&startmonth,&startday);
    scanf("%d %d %d",&endyear,&endmonth,&endday);
    sum=0;
    if ( (startyear%4==0&&startyear%100!=0)||(startyear%400==0)){
         month[1]=29;
         }
    for (i=startyear+1;i<endyear;i++){
        if ( (i%4==0&&i%100!=0)||(i%400==0)){
             sum=sum+366;
             }
        else sum=sum+365;
        }
    if (startyear==endyear){
         if ( startmonth==endmonth){
              sum=endday-startday;
              }
         else {
              for (i=startday+1;i<=month[startmonth-1];i++){
                  sum=sum+1;
                  }
              for (i=startmonth+1;i<endmonth;i++){
                  sum=sum+month[i-1];
                  }
              for (i=1;i<=endday;i++){
                  sum=sum+1;
                  }
              }
         }
    else {
         for (i=startday+1;i<=month[startmonth-1];i++){
                  sum=sum+1;
                  }
         for (i=startmonth+1;i<=12;i++){
                  sum=sum+month[i-1];
                  }
         if ((endyear%4==0&&endyear%100!=0)||(endyear%400==0)){
             month[1]=29;
             }
         else month[i]=28;
         for (i=1;i<endmonth;i++){
             sum=sum+month[i-1];
             }
         for (i=1;i<=endday;i++){
             sum=sum+1;
             }
         }
    printf("%d",sum);
    return 0;       
}
