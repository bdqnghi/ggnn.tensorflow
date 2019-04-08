int main()
{

long year;
long month,day;
int w[10000];
int i,s,h,x,y;
long sum=0;
scanf("%d %d %d",&year,&month,&day);
for(i=0;i<year%8000;i++)
{ 
s=((i+1)%4==0&&(i+1)%100!=0)||(i+1)%400==0;
w[i]=s+1;
}
for(i=0;i<year%8000-1;i++)
{
	sum=sum+w[i];
}
if(year%8000==0) sum=5;
	switch(month)
{
	case 1:h=0;break;
	case 2:h=31;break;
	case 3:h=59;break;
	case 4:h=90;break;
	case 5:h=120;break;
	case 6:h=151;break;
	case 7:h=181;break;
	case 8:h=212;break;
	case 9:h=243;break;
	case 10:h=273;break;
	case 11:h=304;break;
	case 12:h=334;break;
}
s=(year%4==0&&year%100!=0)||year%400==0;
if(s==1&&month>2) h=h+1;	
x=(sum+h+day)%7;
switch(x)
{
case 0:y="Sun.";break;
case 1:y="Mon.";break;
case 2:y="Tue.";break;
case 3:y="Wed.";break;
case 4:y="Thu.";break;
case 5:y="Fri.";break;
case 6:y="Sat.";break;
}
printf("%s",y);
}
