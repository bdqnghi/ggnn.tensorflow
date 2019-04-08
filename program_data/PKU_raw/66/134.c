int day(unsigned long y,int m,int d)
{  
  int t,i;
    if ((y%4==0&&y%100!=0)||(y%400==0))
    {
      switch(m)
      {
        case 1: t=d;break;
        case 2: t=d+31;break;
        case 3: t=d+60;break;
        case 4: t=d+91;break;
        case 5: t=d+121;break;
        case 6: t=d+152;break;
        case 7: t=d+182;break;
        case 8: t=d+213;break;
        case 9: t=d+244;break;
        case 10: t=d+274;break;
        case 11: t=d+305;break;
        case 12: t=d+335;break;
      }  
    }
    else
    {
      switch(m)
      {
        case 1: t=d;break;
        case 2: t=d+31;break;
        case 3: t=d+59;break;
        case 4: t=d+90;break;
        case 5: t=d+120;break;
        case 6: t=d+151;break;
        case 7: t=d+181;break;
        case 8: t=d+212;break;
        case 9: t=d+243;break;
        case 10: t=d+273;break;
        case 11: t=d+304;break;
        case 12: t=d+334;break;
      }
    }
  return(t);
}

void main()
{
 int day(unsigned long,int,int);
 unsigned long y;
 int m,d,w;
 scanf("%ld %d %d",&y,&m,&d);
 w=(day(y,m,d)+y-1+(y-1)/4-(y-1)/100+(y-1)/400)%7;
 switch(w)
  {
   case 1: printf("Mon.");break;
   case 2: printf("Tue.");break;
   case 3: printf("Wed.");break;
   case 4: printf("Thu.");break;
   case 5: printf("Fri.");break;
   case 6: printf("Sat.");break;
   case 0: printf("Sun.");break;
  }

}
