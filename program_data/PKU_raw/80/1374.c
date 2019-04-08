int judgeyear(int year)
{
	if (year%4!=0||year%100==0&&year%400!=0)
		return 0;
	else
		return 1;
}








int main ()
{
    int year1,month1,day1;
	int year2,month2,day2;
	cin>>year1>>month1>>day1>>year2>>month2>>day2;
	int montha[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int monthb[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	for (int i=year1+1;i<year2;i++)
	{
		sum+=365+judgeyear(i);
		
	}
	if (year1<year2)
	{
		for (int i=month1+1;i<=12;i++)
		{
			if (judgeyear(year1))
				sum+=monthb[i];
			else
				sum+=montha[i];
			
		}
		for (int i=1;i<month2;i++)
		{
			if (judgeyear(year2))
				sum+=monthb[i];
			else
				sum+=montha[i];
	
		}
	}
	else
	{
		for (int i=month1+1;i<month2;i++)
		{
			if (judgeyear(year1))
				sum+=monthb[i];
			else
				sum+=montha[i];
		}
	}
	if (year1==year2&&month1==month2)
	{sum+=day2-day1;}
	else
	{
		if (judgeyear(year1))
			sum+=monthb[month1]-day1;
		else
			sum+=montha[month1]-day1;
		sum+=day2;

	}
		cout<<sum<<endl;

	

		
















	return 0;
}