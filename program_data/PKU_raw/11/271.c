static int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  
static int isleapyear(int year) 
{ 
  return (year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0; 
} 

int main() 
{ 
  int year, month, day;
  int z=1;
  while (z<=5)
  {
  scanf("%d %d %d", &year, &month, &day);  
  int n = 0;  
  int i; 
  for (i = 1; i < month; i++) 
  { 
    n =n+ days[i]; 
  } 
  n =n+ day;  
  if (month > 2 && isleapyear(year)) 
  n++; 
  printf("%d\n",n);
  z++;
  }
}