int main(){
    int year,month,day,sum=0;
    int monthday[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d%d%d",&year,&month,&day);
     for(int i=1;i<month;i++){
            sum+=monthday[i-1];
    }
    sum+=day;
    if(month>2&&(!year%4==0&&year%100!=0||year%400!=0)){
            sum-=1;
    }
    printf("%d",sum);
        return 0;
}