int main()
{int year,month,startYear ,startMonth ,startDay ,endYear ,endMonth ,endDay,TOTAL1=0,TOTAL2=0;
scanf("%d %d %d\n%d %d %d",&startYear ,&startMonth ,&startDay,&endYear ,&endMonth ,&endDay);
for(year=1;year<startYear;year++)
{if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  TOTAL1+=366;
else TOTAL1+=365;
}
for(month=1;month<startMonth;month++)
{if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
TOTAL1+=31;
else if(month==2&&((startYear% 4 == 0 && startYear% 100 != 0) || (startYear% 400 == 0)))
TOTAL1+=29;
else TOTAL1+=30;
}
TOTAL1+=startDay;


for(year=1;year<endYear;year++)
{if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  TOTAL2+=366;
else TOTAL2+=365;
}
for(month=1;month<endMonth;month++)
{if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
TOTAL2+=31;
else if(month==2&&((endYear% 4 == 0 && endYear% 100 != 0) || (endYear% 400 == 0)))
TOTAL2+=29;
else TOTAL2+=30;
}
TOTAL2+=endDay;

printf("%d",TOTAL2-TOTAL1);
return 0;
}
