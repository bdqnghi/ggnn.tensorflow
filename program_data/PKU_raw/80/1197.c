int main()
{int k,i,j,year1,year2,month1,month2,day1,day2;
 int month[13];
 month[1]=31;
 month[3]=31;
 month[5]=31;
 month[7]=31;
 month[8]=31;
 month[10]=31;
 month[12]=31;
 month[4]=30;
 month[6]=30;
 month[9]=30;
 month[11]=30;
 int day_number,that_year_day1=0,that_year_day2=0;
 day_number=0;
 scanf("%d%d%d\n",&year1,&month1,&day1);
 scanf("%d%d%d\n",&year2,&month2,&day2);
 for (i=year1;i<=year2-1;i++)
 { if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
      month[2]=29;
   else month[2]=28;
   for (j=1;j<=12;j++)
	   day_number=day_number+month[j];
 }
 if ((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
	{ month[2]=29;}
 else month[2]=28;
 for (k=1;k<=month1-1;k++)
	 that_year_day1+=month[k];
 that_year_day1+=day1;
 if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
	{ month[2]=29;}
 else month[2]=28;
 for (k=1;k<=month2-1;k++)
	 that_year_day2+=month[k];
 that_year_day2+=day2;
 day_number=day_number-that_year_day1+that_year_day2;
 printf("%d",day_number);
 }