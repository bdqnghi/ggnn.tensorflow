int isrunnian(int year){
    if(year%400 == 0 ||(year%4==0 && year%100!=0))
    return 1;
    return 0;
}
int main(){
    int i,year,month,date,sum;
    int montha[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
                       {31,29,31,30,31,30,31,31,30,31,30,31}};
    scanf("%d%d%d",&year,&month,&date);
    sum=(year%7+(year-1)/4-(year-1)/100+(year-1)/400);

    for(i=0;i<month-1;i++){
                         sum+=montha[isrunnian(year)][i]%7;
                         sum%=7;
                         }                    
    sum+=date-1;
    sum=sum%7;
    char *weekdays[7]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    printf("%s.",weekdays[sum]);
    return 0;
}

