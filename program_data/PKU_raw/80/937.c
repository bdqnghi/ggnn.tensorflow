
int main()
{
  int year1,month1,day1;
  int q,sum1,R1;
  int year2,month2,day2;
  int sum2,R2;  
  int i,j,k,sum;
  int sum3=0;
  sum1=0;R1=0;
  sum2=0;R2=0;
  scanf("%d%d%d\n",&year1,&month1,&day1);
  scanf("%d%d%d",&year2,&month2,&day2);

  /*????*/
  if(year1%100==0)
  {
     if(year1%400==0) R1=1;
	 else R1=0;
  }
  else 
  {
     if(year1%4==0) R1=1;
	 else R1=0;
  }




/*??????????????*/
  if(month1==1) 
  {
	  sum1=day1;
//	  printf("%d\n",sum1);
  }
  else
  {
    if(month1==2)
	{
		sum1=31+day1;
//		printf("%d\n",sum1);
	}
	else
	{
	  if(R1==0) /*???*/
	  {
		if(month1==3) sum1=31+28+day1;
	    if(month1==4) sum1=31+28+31+day1;
		if(month1==5) sum1=31+28+31+30+day1;
		if(month1==6) sum1=31+28+31+30+31+day1;
		if(month1==7) sum1=31+28+31+30+31+30+day1;
		if(month1==8) sum1=31+28+31+30+31+30+31+day1;
		if(month1==9) sum1=31+28+31+30+31+30+31+31+day1;
		if(month1==10) sum1=31+28+31+30+31+30+31+31+30+day1;
		if(month1==11) sum1=31+28+31+30+31+30+31+31+30+31+day1;
		if(month1==12) sum1=31+28+31+30+31+30+31+31+30+31+30+day1;
//		printf("%d\n",sum1);
	  }

	  if(R1==1)
	  { 
	  	if(month1==3) sum1=31+29+day1;
	    if(month1==4) sum1=31+29+31+day1;
		if(month1==5) sum1=31+29+31+30+day1;
		if(month1==6) sum1=31+29+31+30+31+day1;
		if(month1==7) sum1=31+29+31+30+31+30+day1;
		if(month1==8) sum1=31+29+31+30+31+30+31+day1;
		if(month1==9) sum1=31+29+31+30+31+30+31+31+day1;
		if(month1==10) sum1=31+29+31+30+31+30+31+31+30+day1;
		if(month1==11) sum1=31+29+31+30+31+30+31+31+30+31+day1;
		if(month1==12) sum1=31+29+31+30+31+30+31+31+30+31+30+day1;
//		printf("%d\n",sum1);
	  }

	}  
  }

 



  /*????*/
  if(year2%100==0)
  {
     if(year2%400==0) R2=1;
	 else R2=0;
  }
  else 
  {
     if(year2%4==0) R2=1;
	 else R2=0;
  }




/*??????????????*/
  if(month2==1) 
  {
	  sum2=day2;
 //     printf("%d\n",sum2);
  }
  else
  {
    if(month2==2) 
	{
		sum2=31+day2;
//		printf("%d\n",sum2);
	}
	else
	{
	  if(R2==0) /*???*/
	  {
		if(month2==3) sum2=31+28+day2;
	    if(month2==4) sum2=31+28+31+day2;
		if(month2==5) sum2=31+28+31+30+day2;
		if(month2==6) sum2=31+28+31+30+31+day2;
		if(month2==7) sum2=31+28+31+30+31+30+day2;
		if(month2==8) sum2=31+28+31+30+31+30+31+day2;
		if(month2==9) sum2=31+28+31+30+31+30+31+31+day2;
		if(month2==10) sum2=31+28+31+30+31+30+31+31+30+day2;
		if(month2==11) sum2=31+28+31+30+31+30+31+31+30+31+day2;
		if(month2==12) sum2=31+28+31+30+31+30+31+31+30+31+30+day2;
  //  	printf("%d\n",sum2);
	  }

	  if(R2==1)
	  { 
	  	if(month2==3) sum2=31+29+day2;
	    if(month2==4) sum2=31+29+31+day2;
		if(month2==5) sum2=31+29+31+30+day2;
		if(month2==6) sum2=31+29+31+30+31+day2;
		if(month2==7) sum2=31+29+31+30+31+30+day2;
		if(month2==8) sum2=31+29+31+30+31+30+31+day2;
		if(month2==9) sum2=31+29+31+30+31+30+31+31+day2;
		if(month2==10) sum2=31+29+31+30+31+30+31+31+30+day2;
		if(month2==11) sum2=31+29+31+30+31+30+31+31+30+31+day2;
		if(month2==12) sum2=31+29+31+30+31+30+31+31+30+31+30+day2;
//		printf("%d\n",sum2);
	  }

	}  
  }



  /*???????*/

  if(R1==0) q=365-sum1;
  if(R1==1) q=366-sum1;

  if(year1==year2)  
  {
    sum=sum2-sum1;
	printf("%d",sum);
  }
  
  if(year2-year1==1)
	 {
	  sum=q+sum2;
	  printf("%d\n",sum);
	 }


  if(year2-year1>1)
  {
   for(j=year1+1;j<year2;j++)
   {
	  if(j%100==0)
		{
	     if(j%400==0) sum3=sum3+366;
		 else sum3=sum3+365;
		}
	  else 
		{
		 if(j%4==0) sum3=sum3+366;
		 else sum3=sum3+365;
		}
//	  printf("%d\n",sum3);
   }

   sum=q+sum3+sum2;
   printf("%d\n",sum);
  }


return 0;
}