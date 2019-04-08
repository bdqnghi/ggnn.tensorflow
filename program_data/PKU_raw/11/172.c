int main()
{
   int year,mon,day,n,leap;
   scanf("%d %d %d",&year,&mon,&day);
   if(year%4==0)
     {
        if(year%100==0)
           {
              if(year%400==0)
                  leap=1;
              else
                  leap=0;
            }
        else
            leap=1;
      }
   else
       leap=0;
   if(leap=0){
      switch(mon)
      {
        case 1:n=day;break;
        case 2:n=31+day;break;
        case 3:n=31+29+day;break;
        case 4:n=31+29+31+day;break;
        case 5:n=31+29+31+30+day;break;
        case 6:n=31+29+31+30+31+day;break;
        case 7:n=31+29+31+30+31+30+day;break;
        case 8:n=31+29+31+30+31+30+31+day;break;
        case 9:n=31+29+31+30+31+30+31+31+day;break;
        case 10:n=31+29+31+30+31+30+31+31+30+day;break;
        case 11:n=31+29+31+30+31+30+31+31+30+31+day;break;
        case 12:n=31+29+31+30+31+30+31+31+30+31+30+day;break;
     }
     printf("%d",n);
   }
   else
    {
      switch(mon)
      {
         case 1:n=day;break;
        case 2:n=31+day;break;
        case 3:n=31+28+day;break;
        case 4:n=31+28+31+day;break;
        case 5:n=31+28+31+30+day;break;
        case 6:n=31+28+31+30+31+day;break;
        case 7:n=31+28+31+30+31+30+day;break;
        case 8:n=31+28+31+30+31+30+31+day;break;
        case 9:n=31+28+31+30+31+30+31+31+day;break;
        case 10:n=31+28+31+30+31+30+31+31+30+day;break;
        case 11:n=31+28+31+30+31+30+31+31+30+31+day;break;
        case 12:n=31+28+31+30+31+30+31+31+30+31+30+day;break;
      }
      printf("%d",n);
     }
return 0;
}

        
