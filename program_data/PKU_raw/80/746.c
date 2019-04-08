int main()
{
int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int y1,m1,d1,y2,m2,d2,i,j,c1,c2,year,n,run,h,sum;
year=365;
scanf("%d%d%d\n%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
if(y2>y1)
{
if((y1% 4 == 0 && y1% 100 != 0) || (y1% 400 == 0))
{
days[2]++;
year++;
}
c1=d1;
for(i=1;i<m1;i++)
c1+=days[i];
c1=year-c1;
days[2]=28;
if((y2% 4 == 0 && y2% 100 != 0) || (y2% 400 == 0))
days[2]++;
c2=d2;
for(j=1;j<m2;j++)
c2+=days[j];
n=y2-y1-1;
run=0;
for(h=y1+1;h<=y2-1;h++)
{
if((h% 4 == 0 && h% 100 != 0) || (h% 400 == 0))
run++;
}
n=n-run;
sum=c1+c2+n*365+run*366;
}
if(y2==y1)
{
if((y1% 4 == 0 && y1% 100 != 0) || (y1% 400 == 0))
{
days[2]++;

}
c1=d1;
for(i=1;i<m1;i++)
c1+=days[i];
days[2]=28;
if((y2% 4 == 0 && y2% 100 != 0) || (y2% 400 == 0))
days[2]++;
c2=d2;
for(j=1;j<m2;j++)
c2+=days[j];
sum=c2-c1;
}
printf("%d",sum);

return 0;
}




