int isRunNian(int year){
    int result;
    if(year%400==0||year%4==0&&year%100!=0){
       result=1;
    }
    else{
       result=0;
    }
    return result;
}
int DijiTian(int year,int month,int day){
    int result=0;
    for(int i=1;i<month;i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
            result+=31;
        }else if(i==4||i==6||i==9||i==11){
            result+=30;
        }else if(i==2){
            if(isRunNian(year)){
                result+=29;
            }else{
                result+=28;
            }
        }
    }
    result+=day;
    return result;
}  
void swap(int*a,int*b){
     int e;
     e=*a;
     *a=*b;
     *b=e;
}
int DijiTian(int year,int month,int day);
int isRunNian(int year);
void swap(int*a,int*b);
int main()
{
    int n,year,month1,month2;
    int a,i,sz[200];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&year,&month1,&month2);
        if(month1>month2){
            swap(&month1,&month2);
        }
        a=DijiTian(year,month2,1)-DijiTian(year,month1,1);
        if(a%7==0){
           printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}