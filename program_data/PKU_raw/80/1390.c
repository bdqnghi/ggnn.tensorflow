int main()
{
	int sum=0,day=0,p=0,i,k,count=0,x=0,y=0,year1,month1,day1,year2,month2,day2;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> year1 >> month1 >> day1;
	cin >> year2 >> month2 >> day2;
	for (i=year1+1;i<year2;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			count++;
		}
	}
	if ((year1%4==0&&year1%100!=0)||(year1%400==0))
	{
		if (month1==1)
		{
			x++;
		}
		if (month1==2)
		{
			if(day1<29)
			{
				x++;
			}
		}
	}
	if ((year2%4==0&&year2%100!=0)||(year2%400==0))
	{
		if (month2>2)
		{
			y++;
		}
		if (month2==2)
		{
			if(day2==29)
			{
				y++;
			}
		}
	}
	for (k=0;k<month1-1;k++)
	{
		day+=month[k];
	}
	day+=day1;
	for (k=11;k>month2-1;k--)
	{
		p+=month[k];
	}
	p+=month[month2-1]-day2;
	sum=365*(year2-year1+1)-day-p+x+y+count;
	//cout << day << " " << p << " " << x << " " << y << endl;
	cout << sum << endl;
	return 0;
}