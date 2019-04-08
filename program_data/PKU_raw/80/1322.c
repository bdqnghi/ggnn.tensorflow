
main()
{
  int y1,m1,d1,y2,m2,d2;
  int D1=0,D2=0,D=0,y,m,d;
  scanf("%d%d%d\n%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
  
  y=y1+1;
  while(y>=y1+1&&y<=y2-1)
  {
    if((y%4==0&&y%100!=0)||y%400==0)
    D=D+366;
    else D=D+365;
    y++;
  }
 
 m=m1-1; 
 switch(m)
 {
  case 11:D1=D1+30;
  case 10:D1=D1+31;
  case 9:D1=D1+30;
  case 8:D1=D1+31;
  case 7:D1=D1+31;
  case 6:D1=D1+30;
  case 5:D1=D1+31;
  case 4:D1=D1+30;
  case 3:D1=D1+31;
  case 2:
        {
          if((y1%4==0&&y1%100!=0)||y1%400==0)
          D1=D1+29;
          else D1=D1+28;
        }
  case 1:D1=D1+31;      
  case 0:break;
 }
 D1=D1+d1; 
  
 m=m2-1; 
 switch(m)
 {
  case 11:D2=D2+30;
  case 10:D2=D2+31;
  case 9:D2=D2+30;
  case 8:D2=D2+31;
  case 7:D2=D2+31;
  case 6:D2=D2+30;
  case 5:D2=D2+31;
  case 4:D2=D2+30;
  case 3:D2=D2+31;
  case 2:
        {
          if((y2%4==0&&y2%100!=0)||y2%400==0)
          D2=D2+29;
          else D2=D2+28;
        }
  case 1:D2=D2+31;      
  case 0:break;
  }
  D2=D2+d2;
  
  if(y1==y2)D=D2-D1;
  else
  {
    if((y1%4==0&&y1%100!=0)||y1%400==0)
    D=D+D2+366-D1;
    else D=D+D2+365-D1;
  }
  printf("%d\n",D);
}
