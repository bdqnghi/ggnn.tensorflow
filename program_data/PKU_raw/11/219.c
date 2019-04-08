
// Provided the value of year, month and day, 
// what day is it in this year? 

//    1. January, 31 days 
//    2. February, 28 days, 29 in leap years 
//    3. March, 31 days 
//    4. April, 30 days 
//    5. May, 31 days 
//    6. June, 30 days 
//    7. July, 31 days 
//    8. August, 31 days 
//    9. September, 30 days 
//    10. October, 31 days 
//    11. November, 30 days 
//    12. December, 31 days 
static int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

// The Gregorian calendar, the current standard calendar in most of the world, 
// adds a 29th day to February in all years evenly divisible by 4, except for 
// centennial years (those ending in -00), which receive the extra day only if 
// they are evenly divisible by 400. 
static int isleapyear(int year) { 
  return (year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0; 
} 

int main() { 
  int year, month, day; 
  int j;
 
  for(j=0;j<5;j++){
   int n = 0;  // to store the result.
  int i; 
    scanf("%d %d %d", &year, &month, &day); 
	

  // Check the input. 
  if (isleapyear(year) && month == 2 && (day < 1 || day > 29)) { 
    printf("Illegal input.\n"); 
    return -1; 
  } 
  if (isleapyear(year) && month != 2 && (day < 1 || day > days[month])) { 
    printf("Illegal input.\n"); 
    return -1; 
  } 
  if (!isleapyear(year) && (day < 1 || day > days[month])) { 
    printf("Illegal input.\n"); 
    return -1; 
  } 

  // add days of former months. 
  for (i = 1; i < month; i++) { 
    n += days[i]; 
  } 
  // add days of this month. 
  n += day; 
  // check leap year 
  if (month > 2 && isleapyear(year)) 
    n++; 

  printf("%d\n", n); 
  }
  return 0;
}