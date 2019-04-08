void main()
{int SY,SM,SD,EY,EM,ED,i,c,d,e,n;
e=0;
scanf("%d %d %d\n %d %d %d",&SY,&SM,&SD,&EY,&EM,&ED);	
if(0<SY<3001&&0<EY<3001)
{if((SY%4==0&&SY%100!=0)||(SY%400==0))
 {
  if(SM==1) d=SD;
  if(SM==2) d=SD+31;
  if(SM==3) d=SD+60;
  if(SM==4) d=SD+91;
  if(SM==5) d=SD+121;
  if(SM==6) d=SD+152;
  if(SM==7) d=SD+182;
  if(SM==8) d=SD+213;
  if(SM==9) d=SD+244;
  if(SM==10) d=SD+274;
  if(SM==11) d=SD+305;
  if(SM==12) d=SD+335;
  }
else
 {
  if(SM==1) d=SD;
  if(SM==2) d=SD+31;
  if(SM==3) d=SD+59;
  if(SM==4) d=SD+90;
  if(SM==5) d=SD+120;
  if(SM==6) d=SD+151;
  if(SM==7) d=SD+181;
  if(SM==8) d=SD+212;
  if(SM==9) d=SD+243;
  if(SM==10) d=SD+273;
  if(SM==11) d=SD+304;
  if(SM==12) d=SD+334;
  }
if((EY%4==0&&EY%100!=0)||(EY%400==0))
 {
  if(EM==1) c=ED;
  if(EM==2) c=ED+31;
  if(EM==3) c=ED+60;
  if(EM==4) c=ED+91;
  if(EM==5) c=ED+121;
  if(EM==6) c=ED+152;
  if(EM==7) c=ED+182;
  if(EM==8) c=ED+213;
  if(EM==9) c=ED+244;
  if(EM==10) c=ED+274;
  if(EM==11) c=ED+305;
  if(EM==12) c=ED+335;
  }
else
 {
  if(EM==1) c=ED;
  if(EM==2) c=ED+31;
  if(EM==3) c=ED+59;
  if(EM==4) c=ED+90;
  if(EM==5) c=ED+120;
  if(EM==6) c=ED+151;
  if(EM==7) c=ED+181;
  if(EM==8) c=ED+212;
  if(EM==9) c=ED+243;
  if(EM==10) c=ED+273;
  if(EM==11) c=ED+304;
  if(EM==12) c=ED+334;
  }
for(i=SY;i<EY;i++)
{if((i%4==0&&i%100!=0)||(i%400==0)) e=e+366;
else e=e+365;}
n=e+c-d;
printf("%d",n);
}
}