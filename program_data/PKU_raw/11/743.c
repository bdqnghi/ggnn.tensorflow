int main()
{
    int year,month,day,result=0,i;
    scanf("%d%d%d",&year,&month,&day);
    for(i=1;i<month;i++)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10){
              result+=31;
        }
        else if(i==4||i==6||i==9||i==11){
              result+=30;
        }
        else if(i==2){
              if(year%400==0||(year%4==0&&year%100!=0)){
                    result+=29;
              }
              else 
                    result+=28;
        }
        
    }
    result+=day;
    printf("%d",result);
    return 0;
}