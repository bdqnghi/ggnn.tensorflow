//???????????
int main()
{
	int year1,year2,month1,month2,day1,day2,sum=0,i;
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>year1>>month1>>day1;
	cin>>year2>>month2>>day2;
	if (year1==year2)
	{
		if (month1==month2)//????
			sum=day2-day1;
		else//?????
		{
			sum+=days[month1]-day1;
			for (i=month1+1;i<month2;i++)
				sum+=days[i];
			sum+=day2;
		}
	}
	else//???
	{
		sum+=days[month1]-day1;
		for (i=month1+1;i<=12;i++)
		{
			if (i==2)
			{
				if (year1%4==0&&year1%100!=0||year1%400==0)
					sum+=days[i]+1;
				else
					sum+=days[i];
			}
			else	
				sum+=days[i];
		}
		for (i=year1+1;i<year2;i++)
		{
			if (i%4==0&&i%100!=0||i%400==0)
				sum+=366;
			else
				sum+=365;
		}
		for (i=1;i<month2;i++)			
		{
			if (i==2)
			{
				if (year2%4==0&&year2%100!=0||year2%400==0)
					sum+=days[i]+1;
				else
					sum+=days[i];
			}
			else	
				sum+=days[i];
		}
		sum+=day2;
	}
	cout<<sum<<endl;
	return 0;
}