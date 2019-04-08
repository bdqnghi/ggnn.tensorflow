void main ()
{
 int y1,y2,m1,m2,d1,d2;
 int year,m,d,t,te,ta;
 scanf ("%d %d %d",&y1,&m1,&d1);
 scanf ("%d %d %d",&y2,&m2,&d2);
 t=(y2-y1)*365;
 te=d1;
 m1=m1-1;
 switch (m1)
 {
 case 11: te=te+30;
 case 10: te=te+31;
 case 9: te=te+30;
 case 8: te=te+31;
 case 7: te=te+31;
 case 6: te=te+30;
 case 5: te=te+31;
 case 4: te=te+30;
 case 3: te=te+31;
 case 2: te=te+28;
 case 1: te=te+31;
 case 0: ;
 }
 ta=d2;
 m2=m2-1;
 switch (m2)
 {
 case 11: ta=ta+30;
 case 10: ta=ta+31;
 case 9: ta=ta+30;
 case 8: ta=ta+31;
 case 7: ta=ta+31;
 case 6: ta=ta+30;
 case 5: ta=ta+31;
 case 4: ta=ta+30;
 case 3: ta=ta+31;
 case 2: ta=ta+28;
 case 1: ta=ta+31;
 case 0: ;
 }
 t=t-te+ta;
 year=y1;
 while (year<y2)
 {
 if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ++t;
 ++year; 
 }
 year=y1;
 if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
   if (m1>2)  t=t-1;
 year=y2;
 if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
   if (m2>2)  t=t+1;
 printf ("%d",t); 
}