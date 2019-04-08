long date(int a,int b,int c)
{
long d=0;
int i;
for(i=1;i<a;i++)
{
if((i%4==0&&i%100!=0)||(i%400==0))
d=d+366;
else d=d+365;
}
for(i=1;i<b;i++)
{
switch(i)
{
case 2:
{if((a%4==0&&a%100!=0)||(a%400==0))
{d=d+29;break;}
else {d=d+28;
break;}}
case 1: d=d+31;break;
case 3: d=d+31;break;
case 5: d=d+31;break;
case 7: d=d+31;break;
case 8: d=d+31;break;
case 10: d=d+31;break;
case 12: d=d+31;break;
case 4:d=d+30;break;
case 6:d=d+30;break;
case 9:d=d+30;break;
case 11: d=d+30;break;

}
}
d=d+c;
return(d);
}

int main()
{
int a[6],i;
long day1,day2,p;
for(i=0;i<6;i++)
{scanf("%d ",&a[i]);}
day1=date(a[0],a[1],a[2]);
day2=date(a[3],a[4],a[5]);
p=day2-day1;
printf("%d",p);
}