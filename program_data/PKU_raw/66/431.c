int main()
{
int w,c,y,m,d,Y;
scanf("%d%d%d",&Y,&m,&d);
if(m==1)
{
Y=Y-1;
m=13;
}
if(m==2)
{
Y=Y-1;
m=14;
}

c=Y/100;
y=Y-c*100; 
int a,b,e;
a=y/4;
b=c/4;
e=26*(m+1)/10;

if(Y<=5000){
w=y+a+b-2*c+e+d-1;
w=w%7;


switch(w)
{
case 0:printf("Sun.\n");break;
case 1:printf("Mon.\n");break;
case 2:printf("Tue.\n");break;
case 3:printf("Wed.\n");break;
case 4:printf("Thu.\n");break;
case 5:printf("Fri.\n");break;
case 6:printf("Sat.\n");break;
}
}
else{
	w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7; 

switch(w)
{
case 6:printf("Sun.\n");break;
case 0:printf("Mon.\n");break;
case 1:printf("Tue.\n");break;
case 2:printf("Wed.\n");break;
case 3:printf("Thu.\n");break;
case 4:printf("Fri.\n");break;
case 5:printf("Sat.\n");break;
}
}
return 0;
}

