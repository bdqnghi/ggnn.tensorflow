int main(int argc, char* argv[])
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
    static int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //?????????0??????????0??13??
    if (((year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0) && month == 2 && (day < 1 || day > 29)) 
	{ 
       printf("Illegal input.\n"); 
       return -1; 
	} 
    if (((year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0) && month != 2 && (day < 1 || day > days[month]))
	{ 
       printf("Illegal input.\n"); 
       return -1; 
	} 
    int n = 0;  
    int i; 
    for (i = 1; i < month; i++) 
	{ 
		n += days[i]; 
	} 
	n += day;
	if (month > 2 && ((year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0) ) 
	{
      n++;
	}
	printf("%d", n); 
}




