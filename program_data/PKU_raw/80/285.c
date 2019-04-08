int main()
{
	int y1,m1,d1,y2,m2,d2,total1=0,total2=0,t,i,e,f,x1,x2; 
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31} ;

 scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2); 
 i=0;
 e=0;
 f=0;
 x1=0;
 x2=0;


for(i=0;i<m1;i++)
 {  e=a[i]+e;} 

if(((y1%4==0&&y1%100!=0)||(y1%400==0))&&m1>2)
e=e+1;

 for(i=0;i<m2;i++)
 {  f=a[i]+f;} 

 if(((y2%4==0&&y2%100!=0)||(y2%400==0))&&m2>2)
	 f=f+1;





for(i=1;i<y1;i++)
 {   if((i%4==0&&i%100!=0)||(i%400==0)) 
{x1=x1+366;}
else{x1=x1+365;}
     } 

for(i=1;i<y2;i++)
 {   if((i%4==0&&i%100!=0)||(i%400==0)) 
{x2=x2+366;}
else{x2=x2+365;}
     } 

 total1=x1+e+d1;
 total2=x2+f+d2;
 
 t=total2-total1;
 
 printf("%d\n",t); 
}

