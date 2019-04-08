int main()
{
	int styear,stmonth,stday,edyear,edmonth,edday,month,year,sum=0;
	cin>>styear>>stmonth>>stday>>edyear>>edmonth>>edday;
	if (edyear==styear)
	{
		if (edmonth==stmonth)
			sum=edday-stday;
		else
		{
			for (month=stmonth;month<=edmonth-1;month++)
			{
				switch (month)
				{
				case 2: sum+=28; break;
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: sum+=31; break;
				default: sum+=30; break;
				}
			}
			if (((styear%4==0&&styear%100!=0)||(styear%400==0))&&stmonth<=2&&edmonth>2)
				sum++;
			sum=sum+edday-stday;
		}
	}
	else
	{
		for (year=styear;year<=edyear;year++)
		{
			if ((year%4==0&&year%100!=0)||(year%400==0))
				sum+=366;
			else
				sum+=365;
		}
		if (stmonth>1)
		{
			for (month=1;month<=stmonth-1;month++)
			{
				switch (month)
				{
				case 2: sum-=28; break;
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: sum-=31; break;
				default: sum-=30; break;
				}
			}
			if (((styear%4==0&&styear%100!=0)||(styear%400==0))&&stmonth>2)
				sum-=1;
		}
		sum-=stday;
		for (month=edmonth;month<=12;month++)
		{
			switch (month)
			{
			case 2: sum-=28; break;
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: sum-=31; break;
			default: sum-=30; break;
			}
		}
		if (((edyear%4==0&&edyear%100!=0)||(edyear%400==0))&&edmonth<=2)
			sum-=1;
		sum+=edday;
	}
	cout<<sum<<endl;
	return 0;
}