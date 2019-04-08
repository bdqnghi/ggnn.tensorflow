static int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  
static int isleapyear(int year) 
{ 
  return (year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0; 
} 

int main() 
{ 

  unsigned long int year, month, day,b,c,d,e;
  unsigned long int f;
  scanf("%d %d %d", &year, &month, &day);  
  int n = 0;  
  int i; 
  for (i = 1; i < month; i++) 
  { 
    n =n+ days[i]; 
  } 
  n =n+ day;  
  b=(int)(year/4);
  c=(int)(year/100);
  d=(int)(year/400);
  if (!isleapyear(year))
  {
  e=b+d-c;
  f=e*2+(year-e-1)*1+n;
  }
 if (isleapyear(year))
 {
   e=b+d-c;
   if (month==1||month==2)
   f=(e-1)*2+(year-e)*1+n;
   else 
   f=(e-1)*2+(year-e)*1+n+1;
 }
  if (f%7==1)
  printf("Mon.\n");
  if (f%7==2)
  printf("Tue.\n");
  if (f%7==3)
  printf("Wed.\n");
  if (f%7==4)
  printf("Thu.\n");
  if (f%7==5)
  printf("Fri.\n");
  if (f%7==6)
  printf("Sat.\n");
  if (f%7==0)
  printf("Sun.\n");
}