int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};  
int leap_days[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};  
int isLeapYear(int year)  
{  
     return year % 400 == 0 || year % 4 == 0 && year % 100 != 0;  
 }  
 //????????(day,month)?????   
 int sumFromFirstDay(int year, int month, int day)  
{  
    int i, ret = day;  
    for (i = 1; i < month; i++)  
        if (isLeapYear(year)) ret = ret + leap_days[i];  
        else ret = ret + days[i];  
    return ret;  
}  
 int main()  
 {  
     int startYear, startMonth, startDay;  
    int endYear, endMonth, endDay;  
    scanf("%d%d%d", &startYear, &startMonth, &startDay);  
    scanf("%d%d%d", &endYear, &endMonth, &endDay);         
     int i, sum = 0;  
    for (i = startYear + 1; i < endYear; i++)  
        sum += isLeapYear(i) ? 366 : 365;  
    int start = sumFromFirstDay(startYear, startMonth, startDay);  
    int end = sumFromFirstDay(endYear, endMonth, endDay);  
  if (startYear == endYear) sum += end - start;  
   else 
   {  
        sum += (365 - start) + end;  
       if (isLeapYear(startYear)) sum++;  
     } 
    printf("%d",sum);  
   return 0;  
 } 
