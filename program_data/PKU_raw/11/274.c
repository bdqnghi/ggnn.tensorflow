int main() 
{
int aaa[5][3];
int year,mon,day,i,n,m;
int month[12];
month[0]=31,month[1]=28,month[2]=31,month[3]=30,month[4]=31,month[5]=30,month[6]=31,month[7]=31,month[8]=30,month[9]=31,month[10]=30,month[11]=31;

for(i=0;i<5;i++)
{
scanf("%d %d %d\n",&year,&mon,&day);
aaa[i][0]=year;
aaa[i][1]=mon;
aaa[i][2]=day;
}
for(i=0;i<5;i++)
{
	year=aaa[i][0];
	mon=aaa[i][1];
	day=aaa[i][2];
if((year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0)
month[1]=29;
else month[1]=28;
n=0;
for(m=0;m<(mon-1);m++)
{
	n=n+month[m];
}
n=n+day;
printf("%d\n",n);
}
}