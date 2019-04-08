void main()
{
int startyear,startmonth,startday,endyear,endmonth,endday,i,j,s,t,result,n=0,m=0;
scanf("%d %d %d\n%d %d %d",&startyear,&startmonth,&startday,&endyear,&endmonth,&endday);
for(i=1;i<=startmonth-1;i++)
{
if(i==1||i==3||i==5||i==7||i==8||i==10)
n=n+31;
else if(i==2)
{
if((startyear%4==0&&startyear%100!=0)||(startyear%400==0))
n=n+29;
else
n=n+28;
}
else
n=n+30;
}
for(j=1800;j<=startyear-1;j++)
{
if((j%4==0&&j%100!=0)||(j%400==0))
n=n+366;
else
n=n+365;
}
n=n+startday;
for(s=1;s<=endmonth-1;s++)
{
if(s==1||s==3||s==5||s==7||s==8||s==10)
m=m+31;
else if(s==2)
{
if((endyear%4==0&&endyear%100!=0)||(endyear%400==0))
m=m+29;
else
m=m+28;
}
else
m=m+30;
}
for(t=1800;t<=endyear-1;t++)
{
if((t%4==0&&t%100!=0)||(t%400==0))
m=m+366;
else
m=m+365;
}
m=m+endday;
result=m-n;
printf("%d",result);
}