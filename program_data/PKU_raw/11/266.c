void main()
{
	int year,month,day,n,i,j;
	for(j=1;j<=5;j++)
	{
	n=0;
		scanf("%d %d %d",&year,&month,&day);
	if((year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0)
	{
		int days[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
		for (i = 0; i < month-1; i++) 
		{ 
			n += days[i]; 
		}
		n+=day;
	}
	else
	{
	    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
        for (i = 0; i < month-1; i++) 
		{ 
			n += days[i]; 
		}
		n+=day;
	}
	printf("%d\n",n);
	}
}