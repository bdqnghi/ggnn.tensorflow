int Year(int a)
{
	if(a%100==0)
	{
		if(a%400==0)
		{
			return 1;
		}
		else
			return 0;
	}
	else if(a%4==0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int year,month,day,a[13],i,answer;
	cin >>year>>month>>day;
	for(i=1;i<=12;i++)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				a[i]=31;break;
			case 4:
			case 6:
			case 9:
			case 11:
				a[i]=30;break;
			case 2:
				if(Year(year)==1)
				{
					a[i]=29;
					break;
				}
				else
				{
					a[i]=28;
					break;
				}
		}
	}
	answer=0;
	for(i=1;i<month;i++)
	{
		answer+=a[i];
	}
	answer+=day;
	cout <<answer<<endl;
	return 0;
}
