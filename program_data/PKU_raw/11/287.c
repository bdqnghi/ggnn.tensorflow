int main()
{
int n,y,r,d,i;
for (i=1;i<=5;i++)
{
scanf("%d%d%d\n",&n,&y,&r);
d=0;
if ((y>2)&&(n%400==0)) d=1;
if ((y>2)&&(n%100!=0)&&(n%4==0)) d=1;
d=d+r;
y--;
switch(y)
{
case 11:d=d+30;
case 10:d=d+31;
case 9:d=d+30;
case 8:d=d+31;
case 7:d=d+31;
case 6:d=d+30;
case 5:d=d+31;
case 4:d=d+30;
case 3:d=d+31;
case 2:d=d+28;
case 1:d=d+31;
}
printf("%d\n",d);
}
return 0;
}