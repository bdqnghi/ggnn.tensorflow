

int main()
{
    long y;
    int m, d;
    int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    scanf ("%ld%d%d", &y, &m, &d);
    long day;
	day = d;
	y = y % 400;
	if(y == 0)
		y = 400;
    int i;
	if((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0)) 
    {
        if(m > 2)
			day = day + 1; 
    } 
    
	for(i = 1; i < y; i++)
    {
          day = day + 365;
          if((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0)) 
          {
                day = day + 1; 
          } 
    }
    
	for(i = 1; i < m; i++)
    {
         day = day + mon[i]; 
    }
    

          
    switch(day % 7) 
    {
	case 1: printf("Mon.\n");break; 
    case 2: printf("Tue.\n");break;
    case 3: printf("Wed.\n");break;
    case 4: printf("Thu.\n");break;
    case 5: printf("Fri.\n");break;
    case 6: printf("Sat.\n");break;
    case 0: printf("Sun.\n");break;          
    }
    
    return 0; 
}

