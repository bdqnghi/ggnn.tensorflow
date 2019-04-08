int main(){
	long year,month,day,sum,i,total,a;
	int N[12]={31,28,31,30,31,30,31,31,30,31,30,31};
         	scanf("%d %d %d",&year,&month,&day);
         a=year-1;
         total=(a%7*365%7+a/4%7+a/400%7-a/100%7)%7;         
    sum=0;
	for(i=1;i<month;i++){
		sum=sum+N[i-1];}
    if(((year%4==0&&year%100!=0)||year%400==0)&&month>=3)
         sum=sum+1;
	sum=sum+day+total-1;
       if(sum%7==0)printf("Mon.");
    else if(sum%7==1)printf("Tue.");
    else if(sum%7==2)printf("Wed.");
    else if(sum%7==3)printf("Thu.");
    else if(sum%7==4)printf("Fri.");
    else if(sum%7==5)printf("Sat.");	
else if(sum%7==6)printf("Sun.");
return 0;
}