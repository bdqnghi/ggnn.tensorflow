void main()
{
 int year,month,day,x=0;
 scanf ("%d %d %d",&year,&month,&day);
 if (month==2)
  {
   x=31+day;
   printf ("%d",x);
  }
 else if (month==1)   {x=day;printf ("%d",x);}
 else
    {
     if  ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
          {
         switch(month)
               {
                case 3:x=31+29;break;
                case 4:x=31+29+31;break;

                case 5:x=31+29+31+30;break;

                case 6:x=31+29+31+30+31;break;

                case 7:x=31+29+31+30+31+30;break;

                case 8:x=31+29+31+30+31+30+31;break;

                case 9:x=31+29+31+30+31+30+31+31;break;


                case 10:x=31+29+31+30+31+30+31+31+30;break;


                case 11:x=31+29+31+30+31+30+31+31+30+31;break;
                case 12:x=31+29+31+30+31+30+31+31+30+31+30;break;
              }
            }
           else 
                {
                  switch(month)
               {
                case 3:x=31+28;break;
                case 4:x=31+28+31;break;

                case 5:x=31+28+31+30;break;

                case 6:x=31+28+31+30+31;break;

                case 7:x=31+28+31+30+31+30;break;

                case 8:x=31+28+31+30+31+30+31;break;

                case 9:x=31+28+31+30+31+30+31+31;break;


                case 10:x=31+28+31+30+31+30+31+31+30;break;


                case 11:x=31+28+31+30+31+30+31+31+30+31;break;
                case 12:x=31+28+31+30+31+30+31+31+30+31+30;break;
              }
              }
             x=x+day;
              
              printf ("%d",x);
}
}
     