int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    int sum=0;
    scanf("%d %d %d",&a,&b,&c);
    a=a-1;
    d=a/400;
    e=a%400;
    f=e/100;
    h=e/4;
    g=d*((303*365+97*366)%7)%7+(h-f)*366+(e-h+f)*365;
    b=b-1;
    for(i=0;i<12;i++)
    {
    switch(i)
      {
      case 0:
        { 
         j=0;
         break;
         }
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
         {
         j=31;
         break;
         }
      case 4:
      case 6:
      case 9:
      case 11:
         {
         j=30;
         break;
         }
      default :
         a=a+1;
         if(((a%4==0)&&(a%100!=0))||(a%400==0))
         {
         j=29;
         }
         else 
		 {
		 j=28;
		 }
      }
     sum+=j;
     if(i==b)
     {
      break;
     }
   }
   k=g+sum+c;
   if (k%7==0)
   {
   printf("Sun.");
   }
   else if (k%7==1)
   {
   printf("Mon.");
   }
   else if (k%7==2)
   {
   printf("Tue.");
    }
   else if (k%7==3)
   {
   printf("Wed.");
   }
   else if (k%7==4)
   {
   printf("Thu.");
   }
   else if (k%7==5)
   {
   printf("Fri.");
   }
   else 
   {
   printf("Sat.");
   }
   return 0;
}
   
