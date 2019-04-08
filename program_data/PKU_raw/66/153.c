int main()
{
	int months[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	char m[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	unsigned int year,month,day,i,l,sum=0;
	scanf("%d%d%d",&year,&month,&day);
	sum=sum+year-1+(year-1)/4-(year-1)/100+(year-1)/400;
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	{
		for(i=0;i<month-1;i++)
		{
			sum=sum+months[1][i];
		}
	}
	else
	{
		for(i=0;i<month-1;i++)
		{
			sum=sum+months[0][i];
		}
	}
	sum=sum+day;
	l=sum%7;
	for(i=0;i<4;i++)
	{
		printf("%c",m[l][i]);
	}
	return 0;
}