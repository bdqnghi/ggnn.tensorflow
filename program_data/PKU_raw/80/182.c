main()
{
      int sy,sm,sd,ey,em,ed;
      long int a,b,p,q;
      a=0,b=0;
      scanf("%d %d %d",&sy,&sm,&sd);
      scanf("%d %d %d",&ey,&em,&ed);
      for (p=0;p<sy;p++)
          {
                        if ((p%4==0&&p%100!=0)||(p%400==0)) a=a+366;
                        else a=a+365;
          }
      while (p==sy)
          {
                   if ((sy%4==0&&sy%100!=0)||(sy%400==0))
                       if(sm==1) a=a+sd;
                       else if (sm==2) a=a+31+sd;
                       else if (sm==3) a=a+31+29+sd;
                       else if (sm==4) a=a+31+29+31+sd;
                       else if (sm==5) a=a+31+29+31+30+sd;
                       else if (sm==6) a=a+31+29+31+30+31+sd;
                       else if (sm==7) a=a+31+29+31+30+31+30+sd;
                       else if (sm==8) a=a+31+29+31+30+31+30+31+sd;
                       else if (sm==9) a=a+31+29+31+30+31+30+31+31+sd;
                       else if (sm==10) a=a+31+29+31+30+31+30+31+31+30+sd;
                       else if (sm==11) a=a+31+29+31+30+31+30+31+31+30+31+sd;
                       else a=a+31+29+31+30+31+30+31+31+30+31+30+sd;
                   else 
                       if(sm==1) a=a+sd;
                       else if (sm==2) a=a+31+sd;
                       else if (sm==3) a=a+31+28+sd;
                       else if (sm==4) a=a+31+28+31+sd;
                       else if (sm==5) a=a+31+28+31+30+sd;
                       else if (sm==6) a=a+31+28+31+30+31+sd;
                       else if (sm==7) a=a+31+28+31+30+31+30+sd;
                       else if (sm==8) a=a+31+28+31+30+31+30+31+sd;
                       else if (sm==9) a=a+31+28+31+30+31+30+31+31+sd;
                       else if (sm==10) a=a+31+28+31+30+31+30+31+31+30+sd;
                       else if (sm==11) a=a+31+28+31+30+31+30+31+31+30+31+sd;
                       else a=a+31+28+31+30+31+30+31+31+30+31+30+sd;
                   break;
          }
      for (q=0;q<ey;q++)
          {
                        if ((q%4==0&&q%100!=0)||(q%400==0)) b=b+366;
                        else b=b+365;
          }
      while (q==ey)
          {
                   if ((ey%4==0&&ey%100!=0)||(ey%400==0))
                       if(em==1)  b=b+ed;
                       else if (em==2) b=b+31+ed;
                       else if (em==3) b=b+31+29+ed;
                       else if (em==4) b=b+31+29+31+ed;
                       else if (em==5) b=b+31+29+31+30+ed;
                       else if (em==6) b=b+31+29+31+30+31+ed;
                       else if (em==7) b=b+31+29+31+30+31+30+ed;
                       else if (em==8) b=b+31+29+31+30+31+30+31+ed;
                       else if (em==9) b=b+31+29+31+30+31+30+31+31+ed;
                       else if (em==10) b=b+31+29+31+30+31+30+31+31+30+ed;
                       else if (em==11) b=b+31+29+31+30+31+30+31+31+30+31+ed;
                       else b=b+31+29+31+30+31+30+31+31+30+31+30+ed;
                   else 
                       if(em==1) b=b+ed;
                       else if (em==2) b=b+31+ed;
                       else if (em==3) b=b+31+28+ed;
                       else if (em==4) b=b+31+28+31+ed;
                       else if (em==5) b=b+31+28+31+30+ed;
                       else if (em==6) b=b+31+28+31+30+31+ed;
                       else if (em==7) b=b+31+28+31+30+31+30+ed;
                       else if (em==8) b=b+31+28+31+30+31+30+31+ed;
                       else if (em==9) b=b+31+28+31+30+31+30+31+31+ed;
                       else if (em==10) b=b+31+28+31+30+31+30+31+31+30+ed;
                       else if (em==11) b=b+31+28+31+30+31+30+31+31+30+31+ed;
                       else b=b+31+28+31+30+31+30+31+31+30+31+30+ed;
                   break;
          }
      printf("%d",b-a);
      return(0);
}
