int main(int argc, char* argv[])
{
	int year, month, date;
	int m=0,n=0;
	scanf("%d %d %d", &year, &month, &date);
	if (month==1)
	{
		n=date;
	}
	m=m+31;
	if (month==2)
	{
		n=m+date;
	}		
	    if ((year%4==0&&year%100!=0)||(year%400==0))
		{
			m=m+29;
		}
		else 
		{
			m=m+28;
		}

	if (month==3)
	{
		n=m+date;
	}
	m=m+31;
	if (month==4)
	{
		n=m+date;
	}
	m=m+30;
	if (month==5)
	{
		n=m+date;
	}
	m=m+31;
	if (month==6)
	{
		n=m+date;
	}
	m=m+30;
	if (month==7)
	{
		n=m+date;
	}
	m=m+31;
	if (month==8)
	{
		n=m+date;
	}
	m=m+31;
	if (month==9)
	{
		n=m+date;
	}
	m=m+30;
	if (month==10)
	{
		n=m+date;
	}
	m=m+31;
	if (month==11)
	{
		n=m+date;
	}
	m=m+30;
	if (month==12)
	{
		n=m+date;
	}
	printf("%d\n", n);
	return 0;
}