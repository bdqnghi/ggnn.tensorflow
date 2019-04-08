main()
{
 unsigned long a,b,c,d,x,y,z;
 scanf("%d %d %d",&a,&b,&c);
{if((a%4==0&&a%100!=0||a%400==0)) x=1;else x=0;/* x????1,???0 */
 if(b==1) d=c;
 else if(b==2) d=c+31;
 else if(b==3) d=c+31+28+x; 
 else if(b==4) d=c+31+28+31+x; 
 else if(b==5) d=c+31+28+31+30+x; 
 else if(b==6) d=c+31+28+31+30+31+x; 
 else if(b==7) d=c+31+28+31+30+31+30+x;
 else if(b==8) d=c+31+28+31+30+31+30+31+x;
 else if(b==9) d=c+31+28+31+30+31+30+31+31+x;
 else if(b==10) d=c+31+28+31+30+31+30+31+31+30+x;
 else if(b==11) d=c+31+28+31+30+31+30+31+31+30+31+x;
 else if(b==12) d=c+31+28+31+30+31+30+31+31+30+31+30+x;/* d??????????? */
 y=(a-1)*1+(a-1)/4-((a/100)-(a/400))+d;
/* y???????????*/
 z=y%7; 
if(z==0) printf("Sun.");
else if(z==1) printf("Mon.");
else if(z==2) printf("Tue.");
else if(z==3) printf("Wed.");
else if(z==4) printf("Thu.");
else if(z==5) printf("Fri.");
else if(z==6) printf("Sat.");
}

}
