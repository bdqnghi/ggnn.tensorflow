int main()
{
   int year,month,day;
   int i;
   int a=0;
   int b=0;
   scanf("%d %d %d",&year,&month,&day);
   int N1[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
   int N2[13]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
   if((year % 4 == 0 && year % 100 !=0 ) || (year % 400 == 0))
   {
	   if(day<1||day>N2[month])
	   {
		   printf("wrong\n");
		   return -1;
	   }
	  else
	  {
		  for(i=1;i<=month;i++)
	  {
		  a+=N2[i];
	  }
	  b=a-day;
	  }
   }
  else
  {
      if(day<1||day>N1[month])
	   {
		   printf("wrong\n");
		   return -1;
	   }
	  else
	  {
	  for(i=1;i<=month;i++)
	  {
		  a+=N1[i];
	  }
	  b=a-day;
	  }
}
	  printf("%d\n",b);
	  return 0;
}


