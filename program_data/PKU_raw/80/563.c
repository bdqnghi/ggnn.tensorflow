void main()
{
  int a,b,c,d,e=0,f,i,Syear,Smonth,Sday,Eyear,Emonth,Eday;
  scanf("%d%d%d%d%d%d",&Syear,&Smonth,&Sday,&Eyear,&Emonth,&Eday);
  a=Eyear-Syear;
  switch(Smonth)
  {
  case 1:b=0;break;
  case 2:b=31;break;
  case 3:b=59;break;
  case 4:b=90;break;
  case 5:b=120;break;
  case 6:b=151;break;
  case 7:b=181;break;
  case 8:b=212;break;
  case 9:b=243;break;
  case 10:b=273;break;
  case 11:b=304;break;
  case 12:b=334;break;
  }
  switch(Emonth)
  {
  case 1:c=0;break;
  case 2:c=31;break;
  case 3:c=59;break;
  case 4:c=90;break;
  case 5:c=120;break;
  case 6:c=151;break;
  case 7:c=181;break;
  case 8:c=212;break;
  case 9:c=243;break;
  case 10:c=273;break;
  case 11:c=304;break;
  case 12:c=334;break;
  }
  d=Eday-Sday;
  for(i=Syear+1;i<=Eyear-1;i++)
     if((i%4==0&&i%100!=0)||(i%400==0)) e+=1;
  if((Syear%4==0&&Syear%100!=0)||(Syear%400==0)&&(Smonth>=3)) e+=1;
  if((Eyear%4==0&&Eyear%100!=0)||(Eyear%400==0)&&(Emonth>=3)) e+=1;
  f=365*a+c-b+d+e;
  printf("%d",f);
  printf("\n");
}