int g1[13] = {0 ,31,28,31,30,31,30,31,31,30,31,30,31};
int g2[13] = {0 ,31,29,31,30,31,30,31,31,30,31,30,31};
int Counting(int,int,int);
int IsLeapYear(int);
void main()
{
	int y1, m1, d1, y2, m2, d2,sum=0,i;
	int b1, b2;
	scanf("%d %d %d\n%d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
	for(i=y1;i<y2;i++)
	{
		if(IsLeapYear(i)==1)
		{
			sum+=366;
		}
		else
		{
			sum+=365;
		}
	}
	b1 = Counting(m1,d1,IsLeapYear(y1));
	b2 = Counting(m2,d2,IsLeapYear(y2));
	printf("%d",sum + b2 - b1 );
	return;

}



int IsLeapYear(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	return 0;
}

int Counting(int month, int date, int leapYear)
{
	int count=0;
	int i; 
	if(leapYear==1)
	{
		for(i=1;i<month;i++)
		{
			count+=g2[i];
		}
	}
	else
	{
		for(i=1;i<month;i++)
		{
			count+=g1[i];
		}
	}
	count+=date;
	return count;
}
		