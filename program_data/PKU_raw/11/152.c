main()
{
	int year;
	int month;
	int day;
	int result=0;
	int i;
	int yue[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	scanf("%d %d %d",&year,&month,&day);
	
	if((year%100==0&&year%400==0)||year%100!=0&&year%4==0)
		yue[1]=29;

	if(month==1)
	{
		result=result+day;
		printf("%d",result);

	}
	if(month>1)
	{
		for(i=0;i<month-1;i++)
		{
			result=result+yue[i];
		}
		result=result+day;
		printf("%d\n",result);
	
	}



	


}