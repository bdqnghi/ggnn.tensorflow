int main(){
int n,y,r,i,result=0,s;
scanf("%d %d %d",&n,&y,&r);
s=(n-1)%400+1;
for(i=1;i<s;i++)
{if(i%4==0&&i%100!=0||i%400==0)
{result+=2;}
else result++;}
for(i=1;i<y;i++)
{if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
{result+=3;}
if(i==4||i==6||i==9||i==11)
{result+=2;}
if(i==2)
{if(n%4==0&&n%100!=0||n%400==0)
{result++;}
}
}
result+=r;
if(result%7==0){printf("Sun.");}
if(result%7==1){printf("Mon.");}
if(result%7==2){printf("Tue.");}
if(result%7==3){printf("Wed.");}
if(result%7==4){printf("Thu.");}
if(result%7==5){printf("Fri.");}
if(result%7==6){printf("Sat.");}
return 0; 
}
