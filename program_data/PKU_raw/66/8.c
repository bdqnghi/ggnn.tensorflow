// xingqiji.cpp : Defines the entry point for the console application.
//


int main()
{
long int y1,y,m,d,a,x,b;
scanf("%d %d %d",&y1,&m,&d);
y=y1%400;
a=y/4-y/100+y/400;

if(y%400==0||y%100!=0&&y%4==0) {if(m<3) a=a-1;}

switch(m){
case 1:x=d;break;
case 2:x=31+d;break;
case 3:x=59+d;break;
case 4:x=90+d;break;
case 5:x=120+d;break;
case 6:x=151+d;break;
case 7:x=181+d;break;
case 8:x=212+d;break;
case 9:x=243+d;break;	
case 10:x=273+d;break;
case 11:x=304+d;break;	
default :x=334+d;break;}	
 
b=(y*365+x+a-1)%7;

switch(b){
case 1:printf("Mon.");break;
case 2:printf("Tue.");break;
case 3:printf("Wed.");break;
case 4:printf("Thu.");break;
case 5:printf("Fri.");break;
case 6:printf("Sat.");break;
default :printf("Sun.");break;}


	return 0;
}

