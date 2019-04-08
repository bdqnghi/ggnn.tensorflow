void main()
{  
  int y,m,d,t,i;
  for(i=1;i<=5;)
  {
    scanf("%d %d %d",&y,&m,&d);
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
    printf("%d\n",t);
    i++;
  }
}