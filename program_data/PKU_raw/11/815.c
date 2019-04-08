main()
{
      int leap(int x);
      int a,b,c,t,i;
      scanf("%d %d %d",&a,&b,&c);
      t=0;
      if(leap(a)==1)
      {
                   for(i=1;i<b;i++)
               {
                   if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                   t=t+31;
                   if(i==2)
                   t=t+29;
                   if(i==4||i==6||i==9||i==11)
                   t=t+30;
                   }
                   t=t+c;
          printf("%d",t);
          }
      if(leap(a)==0)
      {
             for(i=1;i<b;i++)
               {
                   if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                   t=t+31;
                   if(i==2)
                   t=t+28;
                   if(i==4||i==6||i==9||i==11)
                   t=t+30;
                   }
                   t=t+c;
             printf("%d",t);
             }
                  getchar();
                  getchar();
                    }
int leap(int x)
{
    int leap;
    if((x%4==0&&x%100!=0)||(x%400==0))
       leap=1;
    else 
       leap=0;
    return leap;
}
          
          