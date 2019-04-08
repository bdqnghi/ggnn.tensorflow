int main(){
 int year,month,day,i,a;
 long long total,sum;
 int N[12]={31,28,31,30,31,30,31,31,30,31,30,31};
          scanf("%d %d %d",&year,&month,&day);          
         a=year-1;
         total=(long long)a*365+a/4+a/400-a/100;     
         // printf("total is %lld\n",total);    
    sum=0;
 for(i=1;i<month;i++){
  sum=sum+N[i-1];}
    if(((year%4==0&&year%100!=0)||year%400==0)&&month>=3)
         sum=sum+1;
 sum=sum+day+total-1;
 //printf("sum is %lld\n",sum);
       if(sum%7==0)printf("Mon.");
    else if(sum%7==1)printf("Tue.");
    else if(sum%7==2)printf("Wed.");
    else if(sum%7==3)printf("Thu.");
    else if(sum%7==4)printf("Fri.");
    else if(sum%7==5)printf("Sat."); 
else if(sum%7==6)printf("Sun.");
return 0;
}