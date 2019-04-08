int main()
{

    int startyear,startmonth,startday,endyear,endmonth,endday,i,sum;
    int a[13];
    sum=0;
    scanf("%d%d%d\n%d%d%d",&startyear,&startmonth,&startday,&endyear,&endmonth,&endday);
    for(i=1;i<=12;i++)//??	
	{
		
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)	
		{
			a[i]=31; 
		}	
        else if(i==2)	
		{	
            a[i]=28;
		}	
        else if(i==4||i==6||i==9||i==11)	
		{	
            a[i]=30;}	
	} 

     if (startyear==endyear)
	 {	
         while ((startmonth<endmonth)||((startmonth==endmonth)&&(startday<endday)))	
		 {
              if ((startyear%4==0&&startyear%100!=0)||(startyear%400==0))	
			  {	
                   a[2]++;	
			  }	
              startday++;	
              sum=sum+1;	
              if (endday>a[startmonth])	
			  {	
                  startday=0;	//not 1
                  startmonth=startmonth+1; 	
			  }	
		 }
	 }
              else
			  {	
                  for (i=startyear+1;i<=endyear-1;i++)
				  {	
                       if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))	
                       sum=sum+366;	
                       else sum=sum+365;	
				  }
                       sum=sum+a[startmonth]-startday;//the first month	
                       for (i=startmonth+1;i<=12;i++) 
					   {
                           sum=sum+a[i];
					   }
                       if ((startmonth==1)&&((startyear%4==0&&startyear%100!=0)||(startyear%400==0)))
					   {
                            sum++;	
					   }	
                       for (i=1;i<=endmonth-1;i++) 	
					   {	
                           sum=sum+a[i];
					   }
                       if ((endmonth>2)&&((endyear%4==0&&endyear%100!=0)||(endyear%400==0)))
					   {	
                           sum++;	
					   }
                       sum+=endday;
			  }
   printf("%d",sum);
   return 0;
}
