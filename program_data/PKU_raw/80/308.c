int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},
	    b[12]={31,29,31,30,31,30,31,31,30,31,30,31},
	    startYear,startMonth,startDay,endYear,endMonth,endDay;
	scanf("%d%d%d%d%d%d",&startYear,&startMonth,&startDay,&endYear,&endMonth,&endDay);
	int i,sum=0,sum1=0,sum2=0;
     for (i=startYear;i<endYear;i++)
     { if( (i% 4 == 0 && i % 100 != 0) || (i % 400 == 0))
    	 sum=sum+366;
     else
    	 sum=sum+365;
     }
     if ((startYear% 4 == 0 && startYear% 100 != 0) || (startYear % 400 == 0))
     {

    	 for (i=0;i<(startMonth-1);i++)
    		 sum1=sum1+b[i];
     }
     else
     {

    	    	 for (i=0;i<(startMonth-1);i++)
    	    		 sum1=sum1+a[i];
     }
     if ((endYear% 4 == 0 && endYear% 100 != 0) || (endYear % 400 == 0))
          {

         	 for (i=0;i<(endMonth-1);i++)
         		 sum2=sum2+b[i];
          }
     else
             {

            	 for (i=0;i<(endMonth-1);i++)
            		 sum2=sum2+a[i];
             }
     int m;
     m=sum-sum1-startDay+sum2+endDay;
     printf("%d\n",m);
}
