
       

int main()
{
    int w;
    scanf("%d", &w);
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int firstday[13];
    int i;
    
    firstday[1] = 1;
    for(i = 2; i <= 12; i++)
          firstday[i] = firstday[i - 1] + days[i - 1];
    
    int day13[13];
    for(i = 1; i <= 12; i++)
          day13[i] = firstday[i] + 12;
    
    int week[13];
     for(i = 1; i <= 12; i++)
     {
          week[i] = (day13[i] - 1 + w) % 7;
          if(week[i] == 5)
                     printf("%d\n", i);
     }
          
      
    return 0;
}
