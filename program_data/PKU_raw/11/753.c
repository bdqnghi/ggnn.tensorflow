int main()
{
    int y,m,d;
    int t;
    scanf("%d %d %d",&y,&m,&d);
    if(y%400==0||(y%4==0&&y%100!=0))
    {
      switch(m)
      {
             case 1:t=0;break;
             case 2:t=31;break;
             case 3:t=60;break;
             case 4:t=91;break;
             case 5:t=121;break;
             case 6:t=152;break;
             case 7:t=182;break;
             case 8:t=213;break;
             case 9:t=244;break;
             case 10:t=274;break;
             case 11:t=305;break;
             case 12:t=335;
      }
    }
    else
    {
      switch(m)
      {
             case 1:t=0;break;
             case 2:t=31;break;
             case 3:t=59;break;
             case 4:t=90;break;
             case 5:t=120;break;
             case 6:t=151;break;
             case 7:t=181;break;
             case 8:t=212;break;
             case 9:t=243;break;
             case 10:t=273;break;
             case 11:t=304;break;
             case 12:t=334;
      }
    }
    t+=d;
    printf("%d",t);
    return 0;
}
