int main()
{
int year1,year2,month1,month2,day1,day2,sum1=0,sum2=0,leap1,leap2,c1,c2,a,b,x;
scanf("%d %d %d\n%d %d %d", &year1,&month1,&day1, &year2, &month2, &day2);
{
	switch(month1)
	{
case 1:sum1=0;break;
case 2:sum1=31;break;
case 3:sum1=59;break;
case 4:sum1=90;break;
case 5:sum1=120;break;
case 6:sum1=151;break;
case 7:sum1=181;break;
case 8:sum1=212;break;
case 9:sum1=243;break;
case 10:sum1=273;break;
case 11:sum1=304;break;
case 12:sum1=334;break;
default:printf("data error");break;
	}
sum1=sum1+day1;
if((year1%4==0 && year1 % 100 != 0) || (year1 % 400 == 0))
leap1=1;
else
leap1=0;
if(leap1==1&&month1>2)
sum1=sum1+1;
}
{
switch(month2)
{
case 1:sum2=0;break;
case 2:sum2=31;break;
case 3:sum2=59;break;
case 4:sum2=90;break;
case 5:sum2=120;break;
case 6:sum2=151;break;
case 7:sum2=181;break;
case 8:sum2=212;break;
case 9:sum2=243;break;
case 10:sum2=273;break;
case 11:sum2=304;break;
case 12:sum2=334;break;
default:printf("data error");break;
}
sum2=sum2+day2;
if((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
leap2=1;
else
leap2=0;
if(leap2==1&&month2>2)
sum2=sum2+1;
}
c1=(year1-1)/4-(year1-1)/100+(year1-1)/400;
c2=(year2-1)/4-(year2-1)/100+(year2-1)/400;
a=(year1-1)*365+sum1+c1;
b=(year2-1)*365+sum2+c2;
x=b-a;
printf("%d\n",x);
return 0;
}